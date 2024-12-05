#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct ASTNode {
    string value;
    shared_ptr<ASTNode> left;
    shared_ptr<ASTNode> right;

    ASTNode(string val) : value(val), left(nullptr), right(nullptr) {}
};

class Parser {
public:
    Parser(const string& expr) : inputExpression(expr), index(0) {}

    shared_ptr<ASTNode> parse() {
        return parseExpression();
    }

    void generateThreeAddressCode(shared_ptr<ASTNode> node, int& tempCount) {
        if (!node) return;

        generateThreeAddressCode(node->left, tempCount);
        generateThreeAddressCode(node->right, tempCount);

        if (node->value == "+" || node->value == "*" || node->value == "-") {
            string tempVar = "t" + to_string(tempCount++);
            cout << tempVar << " = " << (node->value == "+" ? "" : (node->value == "*" ? "*" : "-")) 
                 << (node->left ? node->left->value : "") 
                 << (node->right ? " " + node->right->value : "") << endl;
            node->value = tempVar;
        }
    }

private:
    string inputExpression;
    size_t index;

    shared_ptr<ASTNode> parseExpression() {
        auto node = parseTerm();
        while (peek() == '+' || peek() == '-') {
            char op = consume();
            auto newNode = make_shared<ASTNode>(string(1, op));
            newNode->left = node;
            newNode->right = parseTerm();
            node = newNode;
        }
        return node;
    }

    shared_ptr<ASTNode> parseTerm() {
        auto node = parseFactor();
        while (peek() == '*') {
            char op = consume();
            auto newNode = make_shared<ASTNode>(string(1, op));
            newNode->left = node;
            newNode->right = parseFactor();
            node = newNode;
        }
        return node;
    }

    shared_ptr<ASTNode> parseFactor() {
        if (isdigit(peek())) {
            string num;
            while (isdigit(peek())) {
                num += consume();
            }
            return make_shared<ASTNode>(num);
        } else if (isalpha(peek())) {
            return make_shared<ASTNode>(string(1, consume()));
        } else {
            throw runtime_error("Unexpected character");
        }
    }

    char peek() {
        return index < inputExpression.size() ? inputExpression[index] : '\0';
    }

    char consume() {
        return inputExpression[index++];
    }
};

int main() {
    string expression;

    cout << "Enter an expression: ";
    getline(cin, expression);

    Parser parser(expression);
    shared_ptr<ASTNode> root = parser.parse();

    int tempCount = 1;
    cout << "Three Address Code:" << endl;
    parser.generateThreeAddressCode(root, tempCount);

    return 0;
}

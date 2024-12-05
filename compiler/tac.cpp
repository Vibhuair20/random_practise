// #include <iostream>
// #include <stack>
// #include <cctype>
// #include <string>
// using namespace std;

// // step 1 Node structure for the Abstract Syntax Tree
// struct Node {
//     char data;
//     Node* left;
//     Node* right;

//     Node(char val) : data(val), left(nullptr), right(nullptr) {}
// };

// // step2 Function to build the Abstract Syntax Tree from a postfix expression
// Node* buildAST(const string& postfix) {
//     stack<Node*> st;

//     for (char ch : postfix) {
//         if (isdigit(ch)) {
//             // Operand: Push it onto the stack as a new node
//             st.push(new Node(ch));
//         } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             // Operator: Pop two operands, create a subtree, and push back
//             if (st.size() < 2) {
//                 throw runtime_error("Invalid postfix expression");
//             }
//             Node* right = st.top(); st.pop();
//             Node* left = st.top(); st.pop();
//             Node* opNode = new Node(ch);
//             opNode->left = left;
//             opNode->right = right;
//             st.push(opNode);
//         } else {
//             throw runtime_error("Invalid character in expression");
//         }
//     }

//     if (st.size() != 1) {
//         throw runtime_error("Invalid postfix expression");
//     }

//     return st.top(); // Root of the AST
// }

// // step 3 Function to generate Three-Address Code (TAC)
// int tempCounter = 1; // Counter for temporary variables
// void generateTAC(Node* root) {
//     if (!root) return;

//     generateTAC(root->left);   // Process left subtree
//     generateTAC(root->right);  // Process right subtree

//     if (!isdigit(root->data)) {
//         // sep 4 Generate TAC for the operator
//         cout << "t" << tempCounter << " = t" << tempCounter - 2
//              << " " << root->data << " t" << tempCounter - 1 << endl;
//         tempCounter++;
//     }
// }
// //main function
// int main() {
//     try {
//         string postfix;
//         cout << "Enter postfix expression: ";
//         cin >> postfix;

//         Node* root = buildAST(postfix); // Build the Abstract Syntax Tree
//         cout << "Three-Address Code:\n";
//         generateTAC(root);             // Generate TAC from the AST
//     } catch (const runtime_error& e) {
//         cerr << "Error: " << e.what() << endl;
//     }

//     return 0;
// }



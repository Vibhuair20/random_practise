#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

//declaring the token types
enum class tokenType{
    keyword,
    identifier,
    integer,
    float,
    operator,
    puntuation,
    unknown
};

//describing tokens
struct tokens{
    tokenType type;
    string value;

    Token(tokenType t, const string& v) : type(t), value(v)
    {
    }
};

//class that will implement lexical analyser
class lexicalAnalyser{
    private:
    string input;
    size_t position;
    unordered_map<string, tokenType> keywords;

    //initializing keywords
    void initKeywords(){
        keywords["int"] = tokenType::keyword;
        keywords["float"] = tokenType::keyword;
        keywords["if"] = tokenType::keyword;
        keywords["else"] = tokenType::keyword;
        keywords["while"] = tokenType::keyword;
        keywords["return"] = tokenType::keyword;
    }

    //function to check if there is a whitespace space, tab or a newline
    bool isWhiteSpace(char c){
        return c == ' ' || c == '\t' || c == '\n' || c == '\r';
    }

    //function to check if a character is alphabatic
    bool isAlpha(char c){
        return ( c >= 'a' && c <='z' )||(c >= 'A' && c<= 'Z');
    }

    //function to check if the character is a digit
    bool isDigit(char c){
        return ( c >= '0' && c <= '9');
    }

    //check if the char is alphanumeric
    //checks weather it is a letter or a number
    bool isAlphan(char c){
        return isAlpha(c) || isDigit(c);
    }

    //to take next word for the input(identofier or a keyword)
    // size_t data type for non negative integers

    string getNextWord(){
        size_t start = position;
        while(position < input.length() && isAlphan(input[position])){
            position++;
        }
        return input.substr(start, position - start);
    }

    // to take next integer (integer or float)
    // from the input
    string getNum(){
        size_t start = position;
        bool has_decimal = false;
        while(position < input.length() && isDigit(input[position] || input[position] == '.')){
            if(input[position] == '.'){
                if(has_decimal){
                    break;
                }
                has_decimal = true;
            }
            position++;
        }
        return input.substr(start, position - start);
    }

public:

// construction of lexical analyser

LexicalAnalyser(const string& source) : input(source), position(0){
    initKeywords();
}

//to rokenize the input string
vector<Token> tokensize(){
    while(position<input.length()){
        char currentChar = input[position];

        if(isWhiteSpace(currentChar)){
            position++;
            continue;
        }

        //identify keyword or identifier
        if(isAlpha(currentChar)){
            string word = getNextWord();
            if(keyword.find(word) != keyword.emd()){
                tokens.emplace_back(tokenType::keyword,word);
            }
            else{
                tokens.emplace_back(
                    tokenType::id
                )
            }
        }
    }
}

};
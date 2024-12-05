#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

bool isSingleLineComment(const string& line) {
    // Check if the line starts with "//"
    size_t pos = line.find_first_not_of(" \t");
    return (pos != string::npos && line[pos] == '/' && line[pos + 1] == '/');
}

bool isMultiLineCommentStart(const string& line) {
    // Check if the line contains "/*"
    size_t pos = line.find("/*");
    return (pos != string::npos);
}

bool isMultiLineCommentEnd(const string& line) {
    // Check if the line contains "*/"
    size_t pos = line.find("*/");
    return (pos != string::npos);
}

void identifyCommentsInFile(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string line;
    bool inMultiLineComment = false;

    while (getline(inputFile, line)) {
        if (isSingleLineComment(line)) {
            cout << line << " : This is a single-line comment" << endl;
        } else if (isMultiLineCommentStart(line) || inMultiLineComment) {
            inMultiLineComment = true;
            cout << line << " : This is part of a multi-line comment" << endl;
            if (isMultiLineCommentEnd(line)) {
                inMultiLineComment = false;
            }
        } else {
            cout << line << " : This is not a comment" << endl;
        }
    }

    inputFile.close();
}

int main() {
    string filename = "sample_code.txt";

    identifyCommentsInFile(filename);

    return 0;
}
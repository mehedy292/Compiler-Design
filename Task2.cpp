#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool hasOperator(const string &w) {
    for (char c : w) {
        if (c == '=' || c == '+' || c == '-') return true;
    }
    return false;
}

int main() {
    string identifiers[10] = {
        "int", "double", "float", "char", "long",
        "main", "return", "if", "else", "void"
    };

    ifstream file("sample.txt");
    if (!file.is_open()) {
        cout << "File not found!" << endl;
        return 0;
    }

    string word;
    bool found = false;

    while (file >> word) {


        if (hasOperator(word)) continue;

        for (int i = 0; i < 10; i++) {
            if (word == identifiers[i]) {
                cout << word << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Sorry, no identifier available!" << endl;
    }

    return 0;
}
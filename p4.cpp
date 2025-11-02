#include <iostream>
#include <string>
using namespace std;

bool isIdentifier(const string &input);

bool isIdentifier(const string &input) {
    if (input.empty())
        return false;

    if (!isalpha(input[0]) && input[0] != '_')
        return false;

    for (size_t i = 1; i < input.length(); i++) {
        if (!isalnum(input[i]) && input[i] != '_')
            return false;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter an input: ";
    cin >> input;

    if (isIdentifier(input))
        cout << input << " is a identifier." << endl;
    else
        cout << input << " is NOT a identifier." << endl;

    return 0;
}

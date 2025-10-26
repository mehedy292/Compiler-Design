#include <iostream>
using namespace std;

void Operators(string input) {
    char a[] = {'+', '-', '*', '/', '%', '='};
    int opCount = 0;

    for (char c : input) {
        for (int i = 0; i < 6; i++) {
            if (c == a[i]) {
                cout << "Operator " << ++opCount << ": " << c << endl;
            }
        }
    }

    if (opCount == 0)
        cout << "No operators found." << endl;
}

int main() {
    string input;

    cout << "Enter an expression: ";
    cin >> input;

    Operators(input);

    return 0;
}

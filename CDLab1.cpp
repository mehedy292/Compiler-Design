#include <iostream>
#include <string>
using namespace std;

bool isNum() {
    string c;
    cin >> c;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] >= '0' && c[i] <= '9') {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

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

double Average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

void findMinMax(int arr[], int n, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}

string getFullName(string fName, string lName) {
    fName.append(" ");
    fName.append(lName);
    return fName;
}

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Check Numeric Constant\n";
    cout << "2. Check Operators\n";
    cout << "3. Check Identifier\n";
    cout << "4. Find Average of Array\n";
    cout << "5. Find Min and Max of Array\n";
    cout << "6. Concatenate First and Last Name\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Enter input: ";
            if (isNum())
                cout << "Numeric constant" << endl;
            else
                cout << "Not numeric" << endl;
            break;
        }
        case 2: {
            string input;
            cout << "Enter an expression: ";
            cin >> input;
            Operators(input);
            break;
        }
        case 3: {
            string input;
            cout << "Enter an input: ";
            cin >> input;
            if (isIdentifier(input))
                cout << input << " is an identifier." << endl;
            else
                cout << input << " is NOT an identifier." << endl;
            break;
        }
        case 4: {
            int n;
            cout << "Number of elements: ";
            cin >> n;
            int arr[n];
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            double avg = Average(arr, n);
            cout << "Average value = " << avg << endl;
            break;
        }
        case 5: {
            int n;
            cout << "Number of elements: ";
            cin >> n;
            int arr[n];
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            int minVal, maxVal;
            findMinMax(arr, n, minVal, maxVal);
            cout << "Minimum value = " << minVal << endl;
            cout << "Maximum value = " << maxVal << endl;
            break;
        }
        case 6: {
            string fName, lName;
            cout << "Enter first name: ";
            cin >> fName;
            cout << "Enter last name: ";
            cin >> lName;
            cout << "Full name: " << getFullName(fName, lName) << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please choose between 1 and 6." << endl;
    }

    return 0;
}

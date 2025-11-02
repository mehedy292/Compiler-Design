#include <iostream>
#include <string>
using namespace std;

string getFullName(string fName, string lName) {
    string fullName = fName;
    fName.append(" ");  
    fName.append(lName); 
    return fName;
}

int main() {
    string fName, lName;

    cout << "Enter your first name: ";
    cin >> fName;

    cout << "Enter your last name: ";
    cin >> lName;

    string fullName = getFullName(fName, lName);
    cout << "Full name = " << fullName << endl;

    return 0;
}

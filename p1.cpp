#include <iostream>
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

int main() {
    cout << "Enter input: ";
    
    if (isNum())
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}

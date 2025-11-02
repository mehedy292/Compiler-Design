#include <iostream>
using namespace std;

double Average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main() {
    int n;
    cout << "Number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double avg = Average(arr, n);
    cout << "Average value of the array = " << avg << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n; // accept no. of elements
    cout << "Enter no. of elements: ";
    cin >> n;
    // init array and accept arguments
    int a[n];
    cout << "Enter " << n << " elements.\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (true) {
        int i;
        cout << "Enter index to display: ";
        cin >> i;
        try {
        if (i >= 0 && i < n) {
        cout << "Value at index " << i << " = " << a[i] << endl;
        } else {
        throw 0;
        }
        } catch (int e) {
        if (e == 0) {
        cout << "Array index out of bound. Terminating...\n";
        return 0;
        }
        }
        cout << "exit? (y / n): ";
        char c;
        cin >> c;
        if (c == 'y' || c == 'Y') {
        return 0;
        }
    }
}
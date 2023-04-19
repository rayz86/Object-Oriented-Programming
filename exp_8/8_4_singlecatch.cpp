#include <iostream>
using namespace std;
int main() {
    double n, d;
    cout << "Enter numerator: ";
    cin >> n;
    cout << "Enter denominator: ";
    cin >> d;
    try {
        if (d == 0) {
        throw 0;
    } else {
        cout << n << "/" << d << " = " << n / d << endl;
    }
    } catch (int e) {
        if (e == 0) { // divide by zero error
        cout << "Cannot divide by zero.\n";
    }
    }
    return 0;
}

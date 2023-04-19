#include <iostream>
using namespace std;
int main() {
    int minValue = 1;
    int maxValue = 99;
    int n;
    cout << "Enter a number (1 - 99): ";
    cin >> n;

    try {
    if (n < minValue || n > maxValue) {
    throw 0;
    } else {
        cout << "Successfully accepted the value.\n";
    }
    } catch (int e) {
    if (e == 0) {
        cout << "That number is outside the range (1 - 99).\n";
    }
    }
    return 0;
}

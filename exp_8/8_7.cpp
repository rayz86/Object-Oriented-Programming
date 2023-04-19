#include <iostream>
using namespace std;
void function1() {
    cout << "calling function 2 inside function 1\n";
    function2();
}
void function2() {
    cout << "calling function 3 inside function 2\n";
    function3();
}
void function3() {
    cout << "inside function 3\n";
    throw 0;
}
int main() {
   try {
    cout << "calling function 1 inside main\n";
    function1();
    } catch (int e) {
    cout << "exception " << e << " handled in main\n";
    }
}

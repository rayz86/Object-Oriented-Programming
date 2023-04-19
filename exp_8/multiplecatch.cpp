#include <iostream>
using namespace std;
int main() {
    try {
        try {
            throw 20;
        } catch (int n) {
        cout << "caught by inner catch\n";
        throw;
        }
    } catch (int n1) {
    cout << "rethrow exception caught";
    }
 return 0;
}

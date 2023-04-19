#include<iostream>
using namespace std;

int main()
{
    //5.4321000000
    cout.precision(10);
    cout.setf(ios::left, ios::adjustfield);
    cout.setf(ios::fixed, ios::floatfield);
    cout<<5.4321;
    return 0;   
}
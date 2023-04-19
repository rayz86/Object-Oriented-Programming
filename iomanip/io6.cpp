#include<iostream>
using namespace std;

int main()
{
    cout.width(11);
    cout.fill('0');
    cout.setf(ios::left, ios::adjustfield);
    cout<<5.4321;
    return 0;   
}
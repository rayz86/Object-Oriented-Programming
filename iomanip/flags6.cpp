#include<iostream>
using namespace std;

int main()
{
    //************+12
    cout.width(15);
    cout.fill('*');
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpos);
    cout<<12;
    return 0;
}
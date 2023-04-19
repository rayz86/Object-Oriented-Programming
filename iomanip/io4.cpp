#include<iostream>
using namespace std;

int main()
{
    char a[]="Hello";
    cout.width(15);
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout<<a;
    return 0;   
}
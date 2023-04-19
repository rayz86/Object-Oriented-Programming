#include<iostream>
using namespace std;

int main()
{
    //Hello**********
    char hello[]="Hello";
    cout.width(15);
    cout.setf(ios::left, ios::adjustfield);
    cout.fill('*');
    cout<<hello;
    return 0;   
}
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char name[]="ROOM 69";
    cout.fill('#');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(20);
    cout<<name;
    return 0;   
}
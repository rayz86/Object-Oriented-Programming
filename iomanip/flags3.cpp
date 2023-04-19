#include<iostream>
using namespace std;

int main()
{
    //4.88
    cout.precision(3);
    cout.setf(ios::left, ios::adjustfield);
    cout<<4.8797;
    return 0;   
}

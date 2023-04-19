#include<iostream>
using namespace std;

int main()
{
    cout.width(16);
    cout.fill('x');
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.precision(3);
    cout<<-4.324321;
    return 0;   
}
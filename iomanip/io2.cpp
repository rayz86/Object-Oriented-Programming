#include<iostream>
using namespace std;

int main()
{
    cout.width(15);
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.precision(3);
    cout.fill('*');
    cout<<-1.235467;
    return 0;   
}
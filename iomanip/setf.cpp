#include<iostream>
using namespace std;

int main()
{
    cout<<"\n\n***********************************\n\n";
    cout.fill('x');
    cout.precision(3);
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.width(16);
    cout<<-4.323567<<"\n";
    cout<<"\n***********************************\n";
    return 0;
}

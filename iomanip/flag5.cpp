#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //-xxxxx4.324e+001
    cout.precision(3);
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.width(16);
    cout.fill('x');
    cout<<-4.324;
    cout<<endl;
    cout<<setprecision(3)<<setw(16)<<setfill('x')<<setiosflags(ios::internal)<<setiosflags(ios::scientific)<<-4.324;
    return 0;   
}
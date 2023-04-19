#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    cout.width(14);
    cout.fill('*');
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(6);
    cout<<1.23;
    cout<<endl;
    cout<<setprecision(6)<<fixed<<setw(14)<<setfill('*')<<1.23;
    return 0;   
}
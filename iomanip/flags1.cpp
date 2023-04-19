#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //******1.230000
    cout.fill('*');
    cout.setf(ios::right, ios::adjustfield);
    cout.setf(ios::fixed, ios::floatfield);
    cout.width(14);
    cout.precision(6);
    cout<<1.23;
    cout<<endl; //another method
    cout<<setprecision(6)<<fixed<<setw(14)<<setfill('*')<<1.23<<endl;
    return 0;   
}
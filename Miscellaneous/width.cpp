#include<iostream>
using namespace std;

int main()
{
    cout<<"ios::width\n";
    //width()
    char c='A';
    cout.width(5);
    cout<<c;

    cout<<"\nios::precision\n";
    //precision()
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(10);
    cout<<3.1422;

    cout<<"\nios::fill\n";
    //fill()
    cout.fill('#');
    cout.width(5);
    cout<<c<<endl;
    int i=1;
    cout.width(6);
    cout<<i;    

    cout<<"\nios::setf\n";
    //setf()
    int n1=100, n2=200;
    cout.setf(ios::showpos);
    cout<<"num1="<<n1<<" num2="<<n2;

    cout<<"\nios::unsetf\n";
    //unsetf()
    cout.setf(ios::showpos | ios::showpoint);
    cout.unsetf(ios::showpos);
    cout<<200.00;

    return 0;   
}
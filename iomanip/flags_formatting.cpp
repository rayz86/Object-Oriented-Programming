#include<iostream>
using namespace std;

int main()
{
    //ROOM 69#############
    char name[]="ROOM 69";
    cout.setf(ios::left, ios::adjustfield);
    cout.width(20);
    cout.fill('#');
    cout<<name;

    //-****1.235e+001
    cout<<"\n";
    cout.precision(3);
    cout.fill('*');
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.width(15);
    cout<<-12.34567;

    cout<<"\n";
    //******1.230000
    cout.setf(ios::right, ios::adjustfield);
    cout.width(14);
    cout.fill('*');
    cout.precision(6);
    cout<<1.23;
    

    return 0;
}
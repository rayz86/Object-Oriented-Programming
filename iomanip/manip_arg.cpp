#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main()
{
    int n1=100, n2=200, total;
    total=n1+n2;
    //setw() and setfill()
    cout<<setfill('#')<<endl;
    cout<<setw(5)<<n1<<" + "<<setw(5)<<n2<<" = "<<setw(5)<<total<<endl;

    //setprecision()
    float f=19.69420;
    cout<<setprecision(4)<<f;
    return 0;   
}

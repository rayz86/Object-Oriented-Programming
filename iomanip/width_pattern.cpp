#include<iostream>
using namespace std;

int main()
{
    int i;
    float pi=22.0/7.0;
    for(i=1;i<=10;i++)
    {
        cout.width(i+1);
        cout.precision(i);
        cout<<pi<<endl;
    }
    return 0;   
}
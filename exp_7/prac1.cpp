#include<iostream>
#include<cmath>
using namespace std;

void absolute(int x)
{
    cout<<"INTEGER ABSOLUTE:";
    cout<<abs(x);
}

void absolute(float y)
{
    cout<<"\nFLOAT ABSOLUTE:";
    cout<<abs(y);
}

int main()
{
    int a=-5;
    float b=-68.99;
    absolute(a);
    absolute(b);
    return 0;   
}
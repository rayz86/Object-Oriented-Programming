#include<iostream>
using namespace std;

float divi(int n, int d)
{
    try
    {
        if(d==0)
            throw d;

        else
            cout<<"ANSWER="<<n/d;
            return 1;
    }
    catch(int d)
    {
        cout<<"error occured as denominator value is 0";
        return 1;
    } 
}

int main()
{
    float x, y, res;
    cout<<"enter NUMERATOR:";
    cin>>x;
    cout<<"enter DENOMINATOR:";
    cin>>y;
    divi(x,y);
    return 0;
}

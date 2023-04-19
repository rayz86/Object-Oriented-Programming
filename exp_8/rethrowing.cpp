#include<iostream>
using namespace std;

void divide(float n, float d)
{
    try
    {
        try
        {
            if(d==0)
            throw d;
            else
            cout<<"\ndivision ans:"<<n/d;
        }
        catch(float d)
        {
            cout<<"\ninside partial catch block";
            throw;
        }
        
    }
    catch(...)
    {
        cout<<"\ninside main catch block";
        d=1;
        cout<<"\nreinitialized d to 1 d="<<d;
        cout<<"\ndivision ans:"<<n/d;
    }
    
}

int main()
{
    float n,d;
    cout<<"enter numerator and deno:";
    cin>>n>>d;
    divide(n,d);
    return 0;   
}
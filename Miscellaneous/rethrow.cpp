#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    try
    {
        try
        {
            if(n==0)
            throw n;
            else
            cout<<n;
        }
        catch(int x)
        {
            cout<<"inner catch";
            throw;
        }
        
    }
    catch(...)
    {
        cout<<"outter catch";
    }
    
    return 0;   
}
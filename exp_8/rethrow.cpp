#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter x:";
    cin>>x;
    try
    {
        try
        {
            if(x==0)
            throw x;

            else
            cout<<"\nx="<<x;
        }
        
        catch(int x)
        {
        cout<<"handling zero in first catch!";
        throw;
        }
    }
    catch(...)
    {
        cout<<"\nhandling zero from second catch!";
    }
    
    return 0;   
}
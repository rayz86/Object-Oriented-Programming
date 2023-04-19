#include<iostream>
using namespace std;

int main()
{
    int n=69;
    try
    {
        try
        {
            for(int i=0;i<n;i++)
            {
                while(i<5)
                throw i;
            }
        }
        catch(int a)
        {
            cout<<"re-throwing from catch block";
            cout<<"\n n="<<a;
            throw;
        }
    }
    catch(int i)
    {
        cout<<"\nre-thrown caught exp";
    }
    return 0;
}
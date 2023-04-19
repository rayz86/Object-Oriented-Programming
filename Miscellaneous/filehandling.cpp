#include<iostream>
using namespace std;

void test(int d)
{
    try
    {
        if(d==0)
        throw d;

        else
        cout<<"no exception found";
        cout<<"\nd="<<d;
    }

    catch(int a)
    {
        cout<<"2nd catch block";
    }

    catch(int x)
    {
        cout<<"inside catch block";
        cout<<"\nreinitializing x to 69";
        x=69;
        cout<<"\nx="<<x;
    }
}

int main()
{
    int a;
    cout<<"enter value for x other than 0 :";
    cin>>a;
    test(a);
    return 0;
}



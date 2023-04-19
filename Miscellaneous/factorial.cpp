#include<iostream>
using namespace std;

int fac(int);

int main()
{
    int n,ans;
    cout<<"enter a number:";
    cin>>n;

    ans=fac(n);
    cout<<"factorial:"<<ans;
    return 0;   
}

int fac(int f)
{
    if(f==1)
        return 1;
    else
        return(f*fac(f-1));
}
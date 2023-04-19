#include<iostream>
using namespace std;

void bubble(int a[],int n)
{
    int i,j;
    bool swapp;

    for(i=0;i<n-1;i++)
    {
        swapp=false;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapp=true;
            }
        }
        if(swapp==false)
        {
            break;
        }
    }
}

void binary(int a[],int n,int s)
{
    int low,high=n-1,mid,pos=-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(pos==a[mid])
        {
            pos=mid+1;
            break;
        }
        
        else if(s<a[mid])
        high=mid-1;

        else if(s>a[mid])
        low=mid+1;

        mid=(low+high)/2;
    }
    if(pos==-1)
    {
        cout<<"not present";
    }
    else
    {
        cout<<"pos:"<<pos;
    }
}

int main()
{
    int i,s,n,a[10];
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }

    bubble(a,5);
    cout<<"enter elem u want to search:";
    cin>>s;
    binary(a,5,s);
    return 0;   
}
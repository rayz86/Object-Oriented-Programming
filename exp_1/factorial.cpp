/*=======================================
Lab ID:1.9
Program title: factorial
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: factorial
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
using namespace std;

int fac(int);

int main()
{
    int n,ans;
    cout<<"enter a number:";
    cin>>n;

    ans=fac(n);

    cout<<"the factorial of "<<n<<" is:"<<ans;
    return 0;
}

int fac(int num)
{
    if(num==1)
        return 1;

    else
    return(num*fac(num-1));
}


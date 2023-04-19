/*=======================================
Lab ID:1.7
Program title: number entered is multiple of the given user input
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: number entered is multiple of the given user input
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
using namespace std;

int main()
{
    int i,x,n;

    cout<<"enter a number:";
    cin>>x;

    cout<<"enter the last number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%x==0)
            cout<<"the number "<<i<<" is a multiple of "<<x<<endl;
    }

    return 0;
}



/*=======================================
Lab ID:1.11
Program title: max of 3 nos
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: max of 3 nos
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
    int a,b,c;

    cout<<"enter 3 values:";
    cin>>a>>b>>c;


    if(a>b)
    {
        if(a>c)
            cout<<"a is largest";
        else
            cout<<"c is largest";
    }

    else
    {
        if(b>c)
            cout<<"b is largest";
        else
            cout<<"c is largest";
    }

    return 0;
}


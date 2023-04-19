/*=======================================
Lab ID:1.12
Program title: min of 3 nos
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: min of 3 nos
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


    if(a<b)
    {
        if(a<c)
            cout<<"a is smallest";
        else
            cout<<"c is smallest";
    }

    else
    {
        if(b<c)
            cout<<"b is smallest";
        else
            cout<<"c is smallest";
    }

    return 0;
}


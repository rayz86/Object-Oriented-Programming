/*=======================================
Lab ID:1.8
Program title: print quotient and
remainder of a number
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: print quotient and
remainder of a number
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
    int num1,num2,quo,rem;

    cout<<"enter a number:";
    cin>>num1;

    cout<<"enter a number:";
    cin>>num2;

    if(num1>num2)
    {
        quo=num1/num2;
        rem=num1%num2;
    }

    else
    {
        quo=num2/num1;
        rem=num2%num1;
    }

    cout<<"the quotient:"<<quo<<endl;
    cout<<"the remainder:"<<rem;

    return 0;
}


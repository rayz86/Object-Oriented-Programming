/*=======================================
Lab ID:1.21
Program title: Write a menu driven program to
determine if a given character is lowercase alphabet or uppercase alphabet or
any other number.(use switch case)
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a menu driven program to
determine if a given character is lowercase alphabet or uppercase alphabet or
any other number.(use switch case)
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
    char ch;
    int a,flag;
    cout<<"enter a character: "<<endl;
    cin>>a;
    a=ch;
    cout<<a<<endl;

    if(65<=a && a<=90)
    {
        flag=1;
    }
    else if(97<=a && a<=122)
    {
        flag=2;
    }
    else if(49<=a && a<=57)
    {
        flag=3;
    }
    switch (flag)
    {
        case 1:
            cout<<ch<<" is an Uppercase Letter";
            break;
        case 2:
            cout<<ch<<" is an lowercase Letter";
            break;
        case 3:
            cout<<ch<<" is a number";
            break;

        default:
            cout<<ch<<" is a special character";
            break;
    }
    return 0;

}



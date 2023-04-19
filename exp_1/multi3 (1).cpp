/*=======================================
Lab ID:1.5
Program title: multiple of 3
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: multiple of 3
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
    int n;

    cout<<"enter a number:";
    cin>>n;

    if(n%3==0)
        cout<<n<<" is a multiple of 3"<<endl;

    else
        cout<<n<<" is not a multiple of 3"<<endl;

    return 0;
}

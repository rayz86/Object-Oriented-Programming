/*=======================================
Lab ID:1.6
Program title: even or odd
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: even or odd
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

    //checking for odd or even
    if(n%2==0)
        cout<<n<<" is an even number";
    else
        cout<<n<<" is an odd number";

    return 0;
}

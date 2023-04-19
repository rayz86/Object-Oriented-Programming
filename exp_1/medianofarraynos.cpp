/*=======================================
Lab ID:1.19
Program title: find meadian of array nos
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: find meadian of array nos
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
    int size,i;
    float median,a[20];

    cout<<"enter size of array:";
    cin>>size;

    for(i=0;i<=size-1;i++)
    {
        cout<<"enter element at pos["<<i<<"]"<<endl;
        cin>>a[i];
    }

    if (size%2==0)
    {
        median=(a[size/2]+a[(size/2)+1])/2;
    }
    else
    {
        median=a[size/2];
    }
    cout<<"median: "<<median<<endl;

    return 0;
}

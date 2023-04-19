/*=======================================
Lab ID:1.13
Program title: avg of array elements
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: avg of array elements
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
    int a[20],size,i,sum=0,avg;

    cout<<"enter size of array:";
    cin>>size;

    for(i=0;i<=size-1;i++)
    {
        cout<<"enter element at pos["<<i<<"]"<<endl;
        cin>>a[i];
    }

    for(i=0;i<=size-1;i++)
    {
       sum=sum+a[i];
    }

    avg=sum/size-1;

    cout<<"the average of all elements in array is:"<<avg;

    return 0;
}


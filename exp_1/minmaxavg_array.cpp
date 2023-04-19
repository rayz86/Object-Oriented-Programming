/*=======================================
Lab ID:1.18
Program title: print min, max and average of an array of numbers
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: print min, max and average of an array of numbers
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
    int a[20],size,i,sum=0,avg,min,max;

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
    cout<<"the average of all elements in array is:"<<avg<<endl;

    max=a[0];
    for(i=0;i<=size-1;i++)
    {
        if(a[i]>=max)
            max=a[i];
    }
    cout<<"max value present in array:"<<max<<endl;

    min=a[size-1];
    for(i=0;i<=size-1;i++)
    {
        if(a[i]<=min)
            min=a[i];
    }
    cout<<"min value present in array:"<<min;

    return 0;
}




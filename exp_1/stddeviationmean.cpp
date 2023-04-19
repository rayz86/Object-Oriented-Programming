/*=======================================
Lab ID:1.10
Program title: print standard deviation, mean and variance of an array of numbers
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: print standard deviation, mean and variance of an array of numbers
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,sum=0;
    float arr[10],size,mean,var,dev;

    cout<<"enter size of array:";
    cin>>size;

    for(i=0;i<=size-1;i++)
    {
        cout<<"enter val at pos["<<i<<"]:";
        cin>>arr[i];
    }

    for(i=0;i<=size-1;i++)
    {
        cout<<"val at pos["<<i<<"]"<<":"<<arr[i]<<endl;
    }

    for(i=0;i<=size-1;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"the sum:"<<sum<<endl;

    mean=sum/size;
    cout<<"the mean:"<<mean<<endl;

    for(i=0;i<=size-1;i++)
    {
        var += pow(arr[i]-mean,2);
    }
    var=var/size;
    cout<<"the variance is:"<<var<<endl;

    dev=sqrt(var);
    cout<<"the deviation is:"<<dev<<endl;

    return 0;
}

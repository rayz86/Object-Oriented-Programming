/*=======================================
Lab ID:2.2
Program title: fraction
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: fraction
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
using namespace std;

class fraction
{
public:
    int num,denum;
    void disfraction()
    {
      cout<<num<<"/"<<denum;
    }
};

int main()
{
    fraction f;
    cout<<"enter number and denominator:";
    cin>>f.num>>f.denum;
    f.disfraction();
    return 0;
}


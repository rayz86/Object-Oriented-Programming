/*=======================================
Lab ID:3.3
Program title: Write a program to calculate the gross pay of regular
and contract employees using method overloading.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to calculate the gross pay of regular
and contract employees using method overloading.
Input: basic salary
Output: basic pay and gross pay
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
using namespace std;

void salary (int bs)
{
    cout<<"the basic pay of contract employee is:"<<bs<<endl;
}

void salary (float gsal)
{
    float hra,da,grsal;
    hra=(gsal*20)/100;
    da=(gsal*10)/100;
    grsal=gsal+hra+da;
    cout<<"\nthe gross pay of regular employee is:"<<grsal<<endl;
}
int main()
{
    int s;
    float sal;
    cout<<"enter salary for regular employee:";
    cin>>sal;
    cout<<"enter salary for contract employee:";
    cin>>s;
    salary(sal);
    salary(s);
    return 0;
}

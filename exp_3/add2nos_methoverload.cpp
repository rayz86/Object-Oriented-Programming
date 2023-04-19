/*=======================================
Lab ID:3.2
Program title: Write a program to add two number using method overloading
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to add two number using method overloading
Input: 2 numbers
Output: sum of the 2 nos
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}

int main()
{
    int a,b;
    double a1,b1;

    cout<<"enter 2 integer nos"<<endl;
    cin>>a>>b;
    cout<<"enter 2 double values"<<endl;
    cin>>a1>>b1;
    cout<<"sum of integers:"<<add(a,b)<<endl;
    cout<<"sum of double values:"<<add(a1,b1);
    return 0;
}


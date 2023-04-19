/*=======================================
Lab ID:1.24
Program title: Write a program to calculate the vaue of F, Given e=8.8542, pi=3.1415 & user input q1, q2, r1, r2
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to calculate the vaue of F, Given e=8.8542, pi=3.1415 & user input q1, q2, r1, r2
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
#define e 8.8541
#define pi 3.1415

using namespace std;

int main()
{
    float q1,q2,r1,r2,F;
    cout<<"enter value for q1:"<<endl;
    cin>>q1;
    cout<<"enter value for q2:"<<endl;
    cin>>q2;
    cout<<"enter value for r1:"<<endl;
    cin>>r1;
    cout<<"enter value for r2:"<<endl;
    cin>>r2;

    F=((1/4)*pi*e)*((q1*q2)/(r1*r1))*r2;

    cout<<"value of F:"<<F;

    return 0;
}



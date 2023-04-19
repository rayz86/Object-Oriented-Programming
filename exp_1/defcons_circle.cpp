/*=======================================
Lab ID:1.17
Program title: Use user defined constants to find area of circle.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Use user defined constants to find area of circle.
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
#define pi 3.14
using namespace std;

float circle(float r)
{
    return (pi*r*r);
}
int main()
{
    float rad;
    cout<<"enter radius:";
    cin>>rad;
    cout<<"area of circle is:"<<circle(rad);
    return 0;
}

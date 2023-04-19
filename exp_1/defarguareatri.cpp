/*=======================================
Lab ID:1.15
Program title: Use default arguments to find area of circle & triangle
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Use default arguments to find area of circle & triangle
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
using namespace std;

float triangle(float b=10,float h=20,float half=0.5)
{
    return (half*b*h);
}

float circle(float r=5,float pi=3.14)
{
    return (pi*r*r);
}
int main()
{
    cout<<"area of traingle is:"<<triangle()<<endl;
    cout<<"area of circle is:"<<circle();
}

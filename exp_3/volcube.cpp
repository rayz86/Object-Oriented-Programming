/*=======================================
Lab ID:3.4
Program title: Write a program to calculate the volume of cube 
and cylinder using method overloading
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description:  Write a program to calculate the volume of cube 
and cylinder using method overloading
Input: radius of cylinder and side of cube
Output: volume of cylinder and cube
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
using namespace std;

float calculate(float s)
{
    return s*s*s;
}

float calculate(float rad, float hei)
{
    float vol;
    vol=hei*3.14*(rad*rad);
    return vol;
}

int main()
{
    float rad,hei,s;
    cout<<"enter the side of cube:";
    cin>>s;
    cout<<"enter the radius and height:";
    cin>>rad>>hei;
    cout<<"\nvolume of cube:"<<calculate(s);
    cout<<"\nvolume of cylinder:"<<calculate(rad,hei);

    return 0;
}


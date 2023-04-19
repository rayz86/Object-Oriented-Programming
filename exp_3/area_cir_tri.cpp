/*=======================================
Lab ID:3.5 
Program title: Write a program to calculate the area of circle 
and triangle using method overloading
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to calculate the area of circle 
and triangle using method overloading
Input: radius of circle and base and height of triangle
Output: area of circle and triangle
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
using namespace std;

float area(float r)
{
    return 3.14*r*r;
}

float area(float base, float hei)
{
    float vol;
    vol=1.0/2.0*base*hei;
    return vol;
}

int main()
{
    float base,hei,r;
    cout<<"enter the radius of circle:";
    cin>>r;
    cout<<"enter the base and height of triangle:";
    cin>>base>>hei;
    cout<<"\nsrea of circle:"<<area(r);
    cout<<"\narea of triangle:"<<area(base,hei);

    return 0;
}


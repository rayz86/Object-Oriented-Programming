/*=======================================
Lab ID:1.23
Program title: write a program using an if-elseif ladder to display the age category
for a given age(age-user input should be taken)
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: write a program using an if-elseif ladder to display the age category
for a given age(age-user input should be taken)
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
    int age;
    cout<<"enter an age:";
    cin>>age;

    if (age>=0 && age<=12)
    {
        cout<<"category:kid";
    }
    else if (age>=13 && age<=24)
    {
        cout<<"category:teenager";
    }
    else if (age>=25 && age<=64)
    {
        cout<<"category:adult";
    }
    else if (age>=65)
    {
        cout<<"category:senior";
    }

    return 0;
}




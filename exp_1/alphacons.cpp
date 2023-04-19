/*=======================================
Lab ID:1.20
Program title: write a program to read an
aabet and print if the aabet is a consonant or a vowel.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: write a program to read an
aabet and print if the aabet is a consonant or a vowel.
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
    char a;
    cout<<"enter a character: "<<endl;
    cin>>a;

    if (a=='a' || a=='e' || a=='i' || a=='o' || a
    =='u' || a=='A' || a=='E' || a =='I' || a=='O' || a
    =='U')
    {
        cout<<a<<" is a vowel"<<endl;
    }
    else
    {
        cout<<a<<" is a consonent";
    }

    return 0;
}


/*=======================================
Lab ID:3.1
Program title: Write a program to swap integers, double values 
and characters using method overloading
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to swap integers, double values 
and characters using method overloading
Input: 2 integers, double and characters
Output: swapped values
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
using namespace std;

void swap (int &a,int &b)
{
    int temp=b;
    b=a;
    a=temp;
}

void swap (double &a, double &b)
{
    float temp=b;
    b=a;
    a=temp;

}

void swap (char &a, char &b)
{
    char temp=b;
    b=a;
    a=temp;


}

int main()
{
    int a,b;
    double a1, b1;
    char a2, b2;
    cout<<"enter 2 integer nos"<<endl;
    cin>>a>>b;
    cout<<"enter 2 double values"<<endl;
    cin>>a1>>b1;
    cout<<"enter 2 char values"<<endl;
    cin>>a2>>b2;
    cout<<"integer nos before swapping\t";
    cout<<"a="<<a<<"\t b=" <<b<<endl;
    swap (a,b);
    cout<<"integer nos after swapping\t";
    cout<<"a="<<a<<"\t b="<<b<<endl<<endl;
    cout<<"double nos before swapping\t";
    cout<<"a1="<<a1<<"\t b1=" <<b1<<endl;
    swap (a1,b1);
    cout<<"double nos after swapping\t";
    cout<<"a1="<<a1<<"\t b1="<<b1<<endl<<endl;
    cout<<"chars before swapping\t";
    cout<<"a2="<<a2<<"\t b2="<<b2<<endl<<endl;
    swap (a2,b2);
    cout<<"chars nos after swapping\t";
    cout<<"a2="<<a2<<"\t b2="<<b2<<endl<<endl;
    return 0;
}


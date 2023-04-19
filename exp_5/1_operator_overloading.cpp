/*=======================================
Lab ID:5.1
Program title: operator overloading basics
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description:operator overloading basics
Input: compile time initialization
Output: real and imaginary added values
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/

#include<iostream>
using namespace std;

class complex
{
    int real, imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int r, int i)
    {
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<"real: "<<real<<endl;
        cout<<"imag: "<<imag;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};

int main()
{
    complex c1(3,5);
    complex c2(1,4);
    complex c3=c1+c2;
    c3.print();
    return 0;
}



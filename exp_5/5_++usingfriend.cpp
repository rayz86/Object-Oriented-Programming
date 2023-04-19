/*=======================================
Lab ID:5.5
Program title: operator overloading using friend function
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: operator overloading using friend function
Input:
Output:
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/
#include<iostream>
using namespace std;

class weight
{
    int kg;
public:
    weight(int x)
    {
        kg=x;
    }
    void print()
    {
        cout<<"weight: "<<kg<<endl;
    }
    friend void operator ++(weight &s1);
    friend void operator ++(weight &s2, int);
};

void operator ++(weight &s1)
{
    ++s1.kg;
}
void operator ++(weight &s2, int)
{
    s2.kg++;
}
int main()
{
    cout<<"before incrementation"<<endl;
    weight s1(10);
    weight s2(20);
    s1.print();
    s2.print();
    cout<<"after incrementation"<<endl;
    ++s1;
    s1.print();
    s2++;
    s2.print();
    return 0;
}

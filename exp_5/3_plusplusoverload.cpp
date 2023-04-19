/*=======================================
Lab ID:5.3
Program title: ++operator overloading basics
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: ++ operator overloading basics
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
    weight()
    {
        kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void print()
    {
        cout<<"weight: "<<kg<<endl;
    }
    void operator ++( )
    {
        ++kg;
    }
//    void operator ++(int)
//    {
//        kg++;
//    }
    weight operator ++(int)
    {
        weight temp;
        temp.kg=kg++;
        return temp;
    }
};

int main()
{
    weight s1(10);
    weight s2(20);
    weight s3;
    ++s1;
    s1.print();
    s2++;
    s2.print();
    s3=s2++;
    s3.print();
    s2.print();
    return 0;
}

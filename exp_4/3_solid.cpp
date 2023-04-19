/*=======================================
Lab ID:4.3
Program title: Write a program to implement a class ‘Solid’ with
data members (radius,height). Include different constructors to
initialize data members and also include members functions to
compute volume of cylinder and cone. Include default argument
for the data member ‘radius’.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to implement a class ‘Solid’ with
data members (radius,height). Include different constructors to
initialize data members and also include members functions to
compute volume of cylinder and cone. Include default argument
for the data member ‘radius’.
Input: radius, height of cone and inner and outer radius of cylinder
Output: volume of cone and cylinder
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/

#include<iostream>
using namespace std;

class solid
{
 float Height1, Height2, coneV, cylinV;

    public:
    solid ()
    {
        Height1=9.6;
        Height2=6.5;
    }
    solid(float h1, float h2)
    {
        Height1=h1;
        Height2=h2;
    }
    solid(solid &s)
    {
        Height1=s.Height1;
        Height2=s.Height2;

    }
    void calc(float radius=5)
    {
        coneV =3.14*radius*radius*(Height1/3);
        cylinV =3.14*radius*radius*(Height2);
    }
    void display()
    {
        cout<<"volume of cone:"<<coneV<<endl;
        cout<<"Volume of cylinder:"<<cylinV<<"\n"<<endl;
    }
};
int main ()
{
    solid s1, s2(8.1,4.2), s3(s2);
    s1.calc();
    s2.calc();
    s3.calc();
    cout<<"Output using default constructor:\n";
    s1.display();
    cout<<"Output using parametric constructor:\n";
    s2.display();
    cout<<"Output using copy constructor:\n";
    s3.display();
    return 0;
}



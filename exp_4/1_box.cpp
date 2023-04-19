/*=======================================
Lab ID:4.1
Program title: Write a program to implement a class ‘Box’
with data members (Length,Breadth,Height). Include different
constructors to initialize data members and also include members
functions to compute surface area and volume of each box objects
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to implement a class ‘Box’
with data members (Length,Breadth,Height). Include different
constructors to initialize data members and also include members
functions to compute surface area and volume of each box objects
Input: length breadth height
Output: surface area and volume of box
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/

#include<iostream>
using namespace std;

class box
{
    float len,br,ht,sa,vl;
public:
    box()
    {
        len=10;
        br=12;
        ht=15;
    }
    box(float l,float b, float h)
    {
        len=l;
        br=b;
        ht=h;
    }
    box(box &p)
    {
        len=p.len;
        br=p.br;
        ht=p.ht;
    }

    void surfar()
    {
        sa=2*((len*br)+(len*ht)+(br*ht));
    }
    void vol()
    {
        vl=len*br*ht;
    }
    void display()
    {
       cout<<"Surface area of the box: "<<sa<<endl;;
       cout<<"volume of a cube: "<<vl<<endl;;
    }
};

int main()
{
    box b1, b2(5.5,4.5,5), b3(b2);

    cout<<"DEFAULT CONSTRUCTOR:"<<endl;
    b1.surfar();
    b1.vol();
    b1.display();
    cout<<"\nPARAMETERIZED CONSTRUCTOR:"<<endl;
    b2.surfar();
    b2.vol();
    b2.display();
    cout<<"\nCOPY CONSTRUCTOR:"<<endl;
    b3.surfar();
    b3.vol();
    b3.display();
    return 0;
}




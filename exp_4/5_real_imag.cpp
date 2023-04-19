/*===============================
Lab ID: 4.5
Title: Constructors & Destructors
Name: Rayyan Shaikh
Roll No.: 21co43
Language: C++
Due date:
=================================
Description:Write a program to implement a class ‘Complex Nos’ with data members(real,imag).
Include parameterised and copy constructors to initialize data members and
also include members functions to compute and display the sum and difference of complex nos.
Input: Real and imaginary parts of two complex numbers
Output: complex no. A, Complex no. B, Sum of complex no. A and complex no. B
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
using namespace std;
class ComplexB;
class ComplexA
{
    int real, imaginary;

    public:
    ComplexA()
    {
        cout<<"enter the real part of the number A: ";
        cin>>real;
        cout<<"enter the imaginary part of the number A: ";
        cin>>imaginary;
    }

    friend void display(ComplexA C1);
    friend void sum(ComplexA C1,ComplexB C2);
    friend void diff(ComplexA C1,ComplexB C2);
};
class ComplexB
{
    int real, imaginary;

    public:
    ComplexB()
    {
        cout<<"\nenter the real part of the complex number B: ";
        cin>>real;
        cout<<"enter the imaginary part of the number B: ";
        cin>>imaginary;
    }

    friend void display(ComplexB C2);
    friend void sum(ComplexA C1,ComplexB C2);
    friend void diff(ComplexA C1,ComplexB C2);
};

void display( ComplexA C)
{
    cout<<"\nthe complex no. A is: "<<C.real<<"+"<<C.imaginary<<"i"<<endl;
}

void display( ComplexB C)
{
    cout<<"the complex no. B is: "<<C.real<<"+"<<C.imaginary<<"i"<<endl;
}

void sum(ComplexA Ca, ComplexB Cb)
{
    int Sreal, Simag;
    Sreal = Ca.real + Cb.real;
    Simag = Ca.imaginary+Cb.imaginary;
    cout<<"\nSum of cmoplex no. A and B is: "<<Sreal<<"+"<<Simag<<"i"<<endl;
}
void diff(ComplexA Ca, ComplexB Cb)
{
    int Dreal, Dimag;
    Dreal = Ca.real - Cb.real;
    Dimag = Ca.imaginary - Cb.imaginary;
    cout<<"\nDifference of cmoplex no. A and B is: "<<Dreal<<"+"<<Dimag<<"i\n"<<endl;
}

int main()
{
    ComplexA c1;
    ComplexB c2;
    display(c1);
    display(c2);
    sum(c1, c2);
    diff(c1, c2);
    return 0;
}

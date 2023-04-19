/*=======================================
Lab ID:4.2
Program title: Write a program to implement class ‘Date’ with
data members(date,month,year). Include different constructors
to initialize data members and also include members functions
to display each date object in ‘dd-mm-yyyy’ format.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Write a program to implement class ‘Date’ with
data members(date,month,year). Include different constructors
to initialize data members and also include members functions
to display each date object in ‘dd-mm-yyyy’ format.
Input: date, month, year
Output: output in dd-mm-yyyy format
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/

#include<iostream>
using namespace std;

class date
{
    string d,m,y;
public:
    date()
    {
        d="29";
        m="09";
        y="2022";
    }
    date(string day, string mth, string yr)
    {
        d=day;
        m=mth;
        y=yr;
    }
    date(date &p)
    {
        d=p.d;
        m=p.m;
        y=p.y;
    }

    void display()
    {
        cout<<d<<"-"<<m<<"-"<<y<<endl;
    }
};

int main()
{
    string day, mth, yr;
    cout<<"enter the Day, Month and Year:";
    cin>>day>>mth>>yr;
    date d1, d2(day, mth, yr), d3(d2);
    cout<<"DEFAULT CONSTRUCTOR:"<<endl;
    d1.display();
    cout<<"\nPARAMETERIZED CONSTRUCTOR:"<<endl;
    d2.display();
    cout<<"\nCOPY CONSTRUCTOR:"<<endl;
    d3.display();
    return 0;
}





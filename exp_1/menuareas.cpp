/*=======================================
Lab ID:1.22
Program title: write a menu driven program to
find the area of triangle ,circle, square and rectangle.(use switch case)
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: write a menu driven program to
find the area of triangle ,circle, square and rectangle.(use switch case)
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
    int x;

    cout<<"1.Traingle 2.Circle 3.Square 4.Rectangle :"<<endl;
    cin>>x;

    switch(x)
        {
        case 1:
            {
                int b,h,area;
                cout<<"enter base of triangle:"<<endl;
                cin>>b;
                cout<<"enter height of triangle:"<<endl;
                cin>>h;
                area=0.5*b*h;

                cout<<"Area of triangle:"<<area;
                break;
            }

        case 2:
            {
                int r,area;
                cout<<"enter radius of circle:"<<endl;
                cin>>r;
                area=3.14*r*r;

                cout<<"Area of circle:"<<area;
                break;
            }

        case 3:
            {
                int s,area;
                cout<<"enter sied of square:"<<endl;
                cin>>s;
                area=s*s;

                cout<<"Area of square:"<<area;
                break;
            }

        case 4:
            {
                int b,l,area;
                cout<<"enter length of rectangle:"<<endl;
                cin>>l;
                cout<<"enter bredth of rectangle:"<<endl;
                cin>>b;
                area=l*b;

                cout<<"Area of rectangle:"<<area;
                break;
            }
            default: cout<<"inavlid input";
        }
        return 0;
}



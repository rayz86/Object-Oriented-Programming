/*=======================================
Lab ID:1.14
Program title: display percentage and grade of student using namespace defined in an external header file(should contain percentage
and grade function)
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: display percentage and grade of student using namespace defined in an external header file(should contain percentage
and grade function)
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
#include"perext.h"

using namespace std;
using namespace perext;

int main()
{
    int p,c,b,m,cp,sum=0,grad;
    float per;

    cout<<"Enter Marks:\n";
    cout<<"PHYSICS:";
    cin>>p;
    cout<<"CHEMISTRY:";
    cin>>c;
    cout<<"BIOLOGY:";
    cin>>b;
    cout<<"MATHS:";
    cin>>m;
    cout<<"COMPUTER:";
    cin>>c;

    sum=p+c+b+m+cp;
    per=percent(sum);
    cout<<"PERCENTAGE:"<<per<<endl;
    grad=grade(per);

    if(grad==1)
        cout<<"GRADE A";
    else if(grad==2)
        cout<<"GRADE B";
    else if(grad==3)
        cout<<"GRADE C";
    else if(grad==4)
        cout<<"GRADE D";
    else if(grad==5)
        cout<<"GRADE E";
    else if(grad==6)
        cout<<"FAIL";

    return 0;
}

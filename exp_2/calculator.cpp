/*=======================================
Lab ID:2.8
Program title: calculator
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: calculator
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>

using namespace std;

class calculator
{
    float a,b,ans;

    public:
    void seta(float A) {a=A;}
    void setb(float B) {b=B;}

    float geta() {return a;}
    float getb() {return b;}

    void add() {ans=a+b;}
    void sub() {ans=a-b;}
    void mul() {ans=a*b;}
    void divi(){ans=a/b;}

    void display()
    {
        cout<<"Number 1:"<<a<<endl;
        cout<<"Number 2:"<<b<<endl;
        cout<<"Answer:"<<ans<<endl;
    }
};
int main()
{
    calculator cal;
    float x, y;
    char c;
    cout<<"enter 2 nos:";
    cin>>x>>y;
    cal.seta(x);
    cal.setb(y);
    cout<<"enter the operation:";
    cout<<"1:+ 2:- 3:* 4:/";
    cin>>c;

    switch(c)
    {
        case'+':
        cal.add();
        break;

        case'-':
        cal.sub();
        break;

        case'*':
        cal.mul();
        break;

        case'/':
        cal.divi();
        break;

        default:
            cout<<"invalid input";
            break;
    }
    cal.display();
    return 0;
}

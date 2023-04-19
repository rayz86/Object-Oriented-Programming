/*=======================================
Lab ID:1.4
Program title: calculator without namespace
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: calculator without namespace
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
#include"calculator.h"

using namespace std;
using namespace calculator;

int main()
{
    cout<<"sum="<<add(2,3)<<endl;
    cout<<"sub="<<sub(2,3)<<endl;
    cout<<"mul="<<mul(2,3)<<endl;
    cout<<"div="<<divi(2,3)<<endl;

    return 0;
}

/*=======================================
Lab ID:1.3
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

namespace calculator
{
    float add(float num1,float num2)
    {
        return(num1+num2);
    }

    float sub(float num1,float num2)
    {
        return(num1-num2);
    }

    float mul(float num1,float num2)
    {
        return(num1*num2);
    }

    float divi(float num1,float num2)
    {
        if(num1>num2)
        {
            return(num1/num2);
        }

        else return(num2/num1);
    }
}

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

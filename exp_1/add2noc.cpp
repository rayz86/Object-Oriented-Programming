/*=======================================
Lab ID:1.2
Program title: addition of 2 nos
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: addition of 2 nos
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>

int main()
{
    int num1,num2,sum;

    std::cout<<"enter first number:";
    std::cin>>num1;

    std::cout<<"enter second number:";
    std::cin>>num2;

    sum=num1+num2;

    std::cout<<"the sum of "<<num1<<"+"<<num2<<"="<<sum;

    return 0;
}

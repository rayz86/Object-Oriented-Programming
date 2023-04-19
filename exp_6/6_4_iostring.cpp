/*=======================================
Lab ID:6.4
Program title: demonstrate the use of istringstream and ostringstream
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: demonstrate the use of istringstream and ostringstream
Input:
Output:
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
     ostringstream oss;
     string sample = "Sample String!";
     oss << sample;
     oss << " + Some more text";
     cout << "----- OSTRINGSTEAM ---- " << endl;
     cout << "String Content : " << sample << endl;
     cout << "Ostringsteam Content : " << oss.str() << endl;
     string number = "63";
     string test = "10";
     istringstream iss1(number), iss2(test);
     int num1, num2;
     cout << endl << "----- ISTRINGSTREAM ---- " << endl;
     cout << "Before :-" << endl;
     cout << number << " + " << test << " = " << number + test << endl;
     iss1 >> num1;
     iss2 >> num2;
     cout << "\nAfter :-" << endl;
     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
     return 0;
}

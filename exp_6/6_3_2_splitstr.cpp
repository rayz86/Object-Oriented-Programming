/*=======================================
Lab ID:6.3
Program title: split a string
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: split a string
Input:
Output:
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
     string text;
     int pos;
     cout << "Enter text: ";
     getline(cin, text);
     cout << "Enter the position you want to split the string: ";
     cin >> pos;
     string leftSubText = text.substr(0, pos);
     string rightSubText = text.substr(pos, text.length()-pos);
     cout << "Left sub-string : " << leftSubText << endl;
     cout << "Right sub-string : " << rightSubText << endl;
     return 0;
}

/*=======================================
Lab ID:6.3
Program title: find a substring
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: find a substring
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
     string text, word;
     cout << "Enter some text : ";
     getline(cin, text);
     cout << "Enter word to be searched : ";
     getline(cin, word);
     int pos = text.find(word);
     cout << "Word Found at location : " << pos+1;
     return 0;
}

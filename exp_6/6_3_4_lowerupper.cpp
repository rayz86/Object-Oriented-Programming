/*=======================================
Lab ID:6.3
Program title: convert string to lowercase and vice versa
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: convert string to lowercase and vice versa
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
     string name;
     cout << "Enter text: ";
     getline(cin, name);
     for(int i=0; i<name.length(); i++)
     name[i] = toupper(name[i]);
     cout << "Name in Uppercase : " << name << endl;
     for(int i=0; i<name.length(); i++)
     name[i] = tolower(name[i]);
     cout << "Name in Lowercase : " << name << endl;
     return 0;
}


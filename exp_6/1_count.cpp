/*=======================================
Lab ID:6.1
Program title: count the no of new line,tabs and whitespace characters in a string
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: count the no of new line,tabs and whitespace characters in a string
Input:
Output:
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i=0,newline=0,tab=0,space=0;
    cout<<"Enter a paragraph :";
    getline(cin,s,'$');
    while(s[i]!='\0')
    {
        if(s[i]=='\n')
            newline++;
        if(s[i]=='\t')
            tab++;
        if(s[i]==' ')
            space++;
        i++;
    }
    cout<<"new line in the string are     : "<<newline<<endl;
    cout<<"TAB in the string are          : "<<tab<<endl;
    cout<<"white spaces in the string are : "<<space<<endl;
    return 0;
}

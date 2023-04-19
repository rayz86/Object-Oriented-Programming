/*=======================================
Lab ID:6.2
Program title: find the number of spam words
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: find the number of spam words
Input:
Output:
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/
#include<iostream>
#include<string>
using namespace std;

int spam_check(string spam, string text)
{
     int count = 0, index = -1;
     while(1){
     index = text.find(spam, index+1);
     if(index ==-1) break;
     else count ++;
     }return count;
}
int main()
{
    string spam[] = {"#1", "competition", "register", "evaluate", "best", "price", "weird", "low", "top"};
     string text;
     int count = 0;
     cout << "Enter your text : ";
     getline(cin, text);
     for(int i=0; i<11; i++){
     count += spam_check(spam[i], text);
     }
     cout << "No of spam words : " << count;
}

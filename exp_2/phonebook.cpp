/*=======================================
Lab ID:2.5
Program title: Phonebook. It should contain the contact name and contact number
and include member functions to initialize the data members
array of object to display contact list.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Phonebook. It should contain the contact name and contact number
and include member functions to initialize the data members
array of object to display contact list.
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
#include<string>

using namespace std;

class phonebook
{
    string name;
    string num;

public:
    void setname(string n) {name=n;}
    void setnum(string no) {num=no;}

    string getname() {return name;}
    string getnum() {return num;}

    void display()
    {
        cout<<"NAME:"<<getname()<<endl;
        cout<<"PHONE NUMBER:"<<getnum()<<endl;
    }
};

int main()
{
    phonebook x[20];

    int i,s;
    string n,no;

    cout<<"enter the number of contacts:";
    cin>>s;

    for(i=0;i<=s-1;i++)
    {
        cout<<"enter name of "<<i+1<<" contact:";
        cin>>n;
        cout<<"enter number of "<<i+1<<" contact:";
        cin>>no;
        x[i].setname(n);
        x[i].setnum(no);
        cout<<endl;
    }

    for(i=0;i<=s-1;i++)
    {
        cout<<"CONTACT NO. "<<i+1<<endl;
        x[i].display();
        cout<<endl;
    }

}



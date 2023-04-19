/*=======================================
Lab ID:2.1
Program title: class and objects intro
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: class and objects intro
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/


#include<iostream>
using namespace std;

class number
{
    int arr[10];
    int n;
public:
    void initarray()
    {
        int n;
        cout<<"enter size of array:";
        cin>>this->n;

        for(int i=0;i<this->n;i++)
        {
            cout<<"enter element at pos["<<i<<"]:";
            cin>>arr[i];
            cout<<endl;
        }
    }

    void addscalar(int x)
    {
        for(int i=0;i<n;i++)
        {
            arr[i]+=x;
        }
    }

    void disparray()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"element at pos["<<i<<"]"<<arr[i]<<endl;
        }
    }
};

int main()
{
    number n1;
    n1.initarray();
    n1.addscalar(3);
    n1.disparray();
    return 0;
}

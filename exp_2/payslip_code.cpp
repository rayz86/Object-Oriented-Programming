/*=======================================
Lab ID:2.7
Program title: Create two classes employee and
payscale in an external namespace stored in a user defined
header file‘payslip.h’.Use an array of object to
display the payslip of each employee.
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: Create two classes employee and
payscale in an external namespace stored in a user defined
header file‘payslip.h’.Use an array of object to
display the payslip of each employee
Input: name,number acc number and basic pay.
Output: gross salary of an employee
Algorithm: -
Pre-requisite: C Language
Known bugs: -
=======================================*/

#include<iostream>
#include<string>
#include"payslip.h"

using namespace std;
using namespace payslip;
int main()
{
    int n,i,empid;
    float basicsal,s;
    string Name,Num,acc_no;

    employee e[10];
    payscale p[10];
    cout<<"Enter the no. of Employees:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter details of Employee "<<i+1<<endl;
        cout<<"\nEnter Employee ID:";
        cin>>empid;
        cout<<"Enter Employee Name:";
        cin>>Name;
        cout<<"Enter Employee Number:";
        cin>>Num;
        cout<<"Enter Employee Account number:";
        cin>>acc_no;
        cout<<"Enter Salary:";
        cin>>basicsal;
        e[i].setid(empid);
        e[i].setname(Name);
        e[i].setnum(Num);
        p[i].setaccno(acc_no);
        p[i].setsal(basicsal);
    }

    system("cls");

    for(i=0;i<=n-1;i++)
    {
        cout<<"======================================="<<endl;
        cout<<"----"<<e[i].getname()<<"'s PAYSLIP-----"<<endl;
        cout<<"Employee Name        :"<<e[i].getname()<<endl;
        cout<<"Employee ID          :"<<e[i].getid()<<endl;
        cout<<"Employee Ph no.      :"<<e[i].getnum()<<endl;
        cout<<"Employee Account num :"<<p[i].getaccno()<<endl;
        cout<<"Employee Basic Salary:"<<p[i].getsal()<<endl;
        s=p[i].getsal();
        cout<<"Employee Gross Pay   :"<<p[i].compute(s)<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"======================================="<<endl;
    }
    return 0;
}


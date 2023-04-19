/*=======================================
Lab ID:2.4
Program title: grade report
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: grade report
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
#include<string.h>
#include"gradereport.h"

using namespace std;
using namespace grade_rep;

int main()
{
   student s[20];
   report r[20];
   int n,stroll,m1,m2,m3;
   string stuname,brname;
   cout<<"enter the no. of students:";
   cin>>n;

   for(int i=0;i<=n-1;i++)
   {
      cout<<"enter student name:";
      cin>>stuname;
      s[i].setsname(stuname);
      cout<<"enter student roll:";
      cin>>stroll;
      s[i].setroll(stroll);
      cout<<"enter student branch name:";
      cin>>brname;
      s[i].setbname(brname);

      cout<<"enter marks in subject 1:";
      cin>>m1;
      r[i].setmk1(m1);
      cout<<"enter marks in subject 2:";
      cin>>m2;
      r[i].setmk2(m2);
      cout<<"enter marks in subject 3:";
      cin>>m3;
      r[i].setmk3(m3);

      r[i].computePercent();
      r[i].computeGrade();
   }

   for(int i=0;i<=n-1;i++)
   {
      cout<<"\n\n----------RESULT OF STUDENT "<<i+1<<"----------"<<endl;
      cout<<"Student Name:"<<s[i].getsname()<<endl;
      cout<<"Branch Name:"<<s[i].getbname()<<endl;
      cout<<"Roll no.:"<<s[i].getroll()<<endl;
      cout<<"Subject 1 Marks:"<<r[i].getmk1()<<endl;
      cout<<"Subject 2 Marks:"<<r[i].getmk2()<<endl;
      cout<<"Subject 3 Marks:"<<r[i].getmk3()<<endl;
      cout<<"Percentage:"<<r[i].getPercent()<<endl;
      cout<<"Grade:"<<r[i].getGrade()<<endl;
      cout<<"---------------------------------"<<endl;
   }

   return 0;
}




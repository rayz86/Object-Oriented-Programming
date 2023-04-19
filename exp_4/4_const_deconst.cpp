/*===============================
Lab ID: 4.4
Title: Constructors & Destructors
Name: Rayyan Shaikh
Roll No.: 21co43
Language: C++
Due date:
=================================
Description:Write a program to print the details of students by creating a Student class.
If no data is passed while creating an object of the Student class, then default values should be assigned.
Include different constructors to initialize data members and also include members functions to display student details
Input: name, roll number, branch
Output: name, roll number, branch of the student
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    string branch;
    string rollno;

    public:
    Student()
    {
        name = "Rayyan Shaikh";
        branch = "Computer";
        rollno = "21co43";
    }

    Student(string n, string b, string r)
    {
        name = n;
        branch = b;
        rollno = r;
    }

    Student(Student &X)
    {
        name = X.name;
        branch = X.branch;
        rollno = X.rollno;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No. : "<<rollno<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"\n\n";
    }
};
int main()
{
    string N, B, R;
    cout<<"enter name:";
    getline(cin, N);
    cout<<"enter roll no.:";
    getline(cin, R);
    cout<<"enter branch:";
    getline(cin, B);
    cout<<"\n\n";
    Student s1;
    s1.display();
    Student s2(N, B, R);
    s2.display();
    Student s3(s2);
    s3.display();
    return 0;
}

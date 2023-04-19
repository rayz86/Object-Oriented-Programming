/*=======================================
Lab ID:5.8
Program title: operator overloading using member function
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: operator overloading using member function
Input:
Output:
Algorithm: -
Pre-requisite: Basics of C++
Known bugs: -
=======================================*/
#include <iostream>
using namespace std;
    class Number
    {
     private:
     int num;
     public:
     Number(int num = 0){
     this->num = num;
     }
     void operator -- (){
     --num;
     }
     void operator -- (int){
     num--;
     }
     void display(){
     cout << num;
     }
};
int main()
{
     Number n(5);
     cout << "Before decrementation" << endl;
     cout << "n : ";
     n.display();
     --n;
     cout << "\nAfter pre-decrementation" << endl;
     cout << "n : ";
     n.display();
     n--;
     cout << "\nAfter post-decrementation" << endl;
     cout << "n : ";
     n.display();
     return 0;
}

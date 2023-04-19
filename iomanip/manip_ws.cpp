#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    //ws
    char name[100];
    cout<<"enter ur name:";
    cin>>ws;
    cin.getline(name,100);
    cout<<name;
    return 0;   
}
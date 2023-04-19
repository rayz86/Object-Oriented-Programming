#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,word;
    cout<<"enter the string";
    getline(cin,s);
    cout<<"enter word ro search";
    getline(cin,word);
    int pos=s.find(word);
    cout<<"word found at pos:"<<pos;
    return 0;   
}
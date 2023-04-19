#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cout<<"enter string 1:";
    getline(cin,s1);
    cout<<"enter string 2:";
    getline(cin,s2);
    s3=s1+s2;
    cout<<s3;
    return 0;
}


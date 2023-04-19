#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int pos;
    getline(cin,s);
    cout<<"enter pos to split:";
    cin>>pos;
    string l,r;
    l=s.substr(0,pos);
    r=s.substr(pos,s.length()-pos);
    cout<<"l="<<l;
    cout<<"r="<<r;
    return 0;   
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string list[]={"hi","nigga","bitch"};
    string a;
    int i,count;
    cout<<"enter a string";
    getline(cin,a);

    for(i=0;i<a.length();i++)
    {
        count+=spam(list[i],a);
    }
    return 0;   
}

int spam(string list, string a)
{
    int count,index=-1;
    while(1)
    {
        index=a.find(list,index+1);
        if(index==-1)
        break;
        else
        count++;
    }
    return count;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i=0,newline=0,tab=0,space=0;
    cout<<"Enter a paragraph :";
    getline(cin,s,'$');
    while(s[i]!='\0')
    {
        if(s[i]=='\n')
            newline++;
        if(s[i]=='\t')
            tab++;
        if(s[i]==' ')
            space++;
        i++;
    }
    cout<<"new line in the string are     : "<<newline<<endl;
    cout<<"TAB in the string are          : "<<tab<<endl;
    cout<<"white spaces in the string are : "<<space<<endl;
    return 0;
}

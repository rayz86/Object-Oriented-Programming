#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"decimal value: "<<setbase(10)<<num;
    cout<<"\noctal value: "<<setbase(8)<<num;
    cout<<"\nhexadecimal value: "<<setbase(16)<<num;
    return 0;   
}
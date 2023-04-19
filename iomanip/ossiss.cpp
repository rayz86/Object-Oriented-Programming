#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{

    ostringstream oss;
    string sample="string";
    oss<<sample;
    oss<<"+more text";
    cout<<"ostring\n";
    cout<<"sample:"<<sample;
    cout<<oss.str();

    string num1="69";
    string num2="10";
    istringstream iss1(num1), iss2(num2);
    int n1,n2;
    cout<<"istringsteam\n";
    cout<<num1+num2;
    cout<<endl;
    iss1>>n1;
    iss2>>n2;
    cout<<n1+n2;





    return 0;   
}
#include<iostream>
using namespace std;
class sample
{
    int num;
    public:
    sample(int num)
    {
        this->num=num;
    }
    friend void operator <<(ostream &out, sample &s1);
    friend void operator >>(istream &in, sample &s1);
};

void operator <<(ostream &out, sample &s1)
{
    out<<s1.num;
}

void operator >>(istream &in, sample &s1)
{
    in>>s1.num;
}

int main()
{
    sample s1(10);
    cout<<s1;
    cout<<"enter number";
    cin>>s1;
    cout<<"printing val";
    cout<<s1;
    return 0;   
}
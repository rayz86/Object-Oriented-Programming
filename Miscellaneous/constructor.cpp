#include<iostream>
using namespace std;
class sample
{
    int a=69;
    public:
    sample()
    {
        cout<<"\nDefault cnstr";
    }
    sample(int x)
    {
        cout<<"\nParameterized cnstr";
        a=x;
    }
    sample(sample &f)
    {
        cout<<"\ncopy cnstr";
        a=f.a;
    }
    void display()
    {
        cout<<"\na="<<a;
    }

    friend void sumlol(sample &s3);
};

//friend function
void sumlol(sample &s3)
{
    cout<<"\ncalling from friend function";
    cout<<"\na="<<s3.a;
}

int main()
{
    int m;
    sample s1;
    s1.display();
    cout<<"\nenter the new val:";
    cin>>m;
    sample s2(m);
    s2.display();
    sample s3(s2);
    s3.display();
    sumlol(s3);
    return 0;   
}
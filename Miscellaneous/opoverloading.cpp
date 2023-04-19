#include<iostream>
using namespace std;
class sample
{
    int x;
    public:
    sample(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<"\nx="<<x;
    }

    friend void operator ++(sample &s1);
};

void operator ++(sample &s1)
{
    ++s1.x;
}

int main()
{
    sample s1(10);
    s1.display();
    ++s1;
    s1.display();
    ++s1;
    s1.display();
    ++s1;
    s1.display();
    return 0;   
}
#include<iostream>
using namespace std;
class sample
{
    int n;
    public:

    sample(int x)
    {
        n=x;
    }
    void display()
    {
        cout<<"\nthe value of n: "<<n;
    }

    operator int()
    {
        return n;
    }
};

int main()
{
    sample s(150);
    s.display();
    int x=s;             //class to basic type
    s.display();
    return 0;   
}
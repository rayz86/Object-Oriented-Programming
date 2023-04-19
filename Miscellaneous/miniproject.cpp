#include<iostream>
using namespace std;

template<class T,int n>
class A
{
    public:
    T n;
    void calc()
    {
        int i=1;
        for(i=1;i<=10;i++)
        {
            cout<<n<<"x"<<i<<"="<<n*i<<endl;
        }
    }
};

int main()
{
    A<int,5> t1;
    t1.calc();
    return 0;
}
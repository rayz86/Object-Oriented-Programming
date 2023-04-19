#include<iostream>
using namespace std;

template <class T>
class sample
{
    private:
    T x; 
    T y;
    public:
    sample(T a, T b)
    {
        x=a;
        y=b;
    }
    void swapper()
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }

};

int main()
{
    sample <int>int_swap(10,20);
    cout<<"before swapping"<<endl;
    int_swap.display();
    int_swap.swapper();
    cout<<"after swapping"<<endl;
    int_swap.display();
    return 0;
}


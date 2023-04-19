#include <iostream>
using namespace std;
class A
{
    int a[3];
    public:
    A(int x, int y, int z)
    {
        a[0] = x;
        a[1] = y;
        a[2] = z;
    }

    int operator [](int i)
    {
        return a[i];
    }
};

int main()
{
    A a1(12, 13, 14);
    cout<<"array index "<<0<<" "<<a1[0]<<endl;
    cout<<"array index "<<1<<" "<<a1[1]<<endl;
    cout<<"array index "<<2<<" "<<a1[2]<<endl;
    return 0;
}
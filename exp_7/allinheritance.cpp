#include<iostream>
using namespace std;
//single
class sample
{
    public:
    int x;
    void getx(int x)
    {
        cout<<"X="<<x;
    }
};

class smoll: public sample
{
    public:
    int y;
    void gety(int y)
    {
        cout<<"\tY="<<y;
    }
};

int main()
{
    smoll s;
    s.getx(6);
    s.gety(9);
    return 0;   
}

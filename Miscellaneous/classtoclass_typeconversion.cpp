#include<iostream>
using namespace std;
class triangle
{
    int l,b;
    float area;
    public:

    triangle(int len,int br)
    {
        l=len;
        b=br;
    }

    void area1()
    {
        area=0.5*l*b;
        cout<<"\narea of triangle:"<<area;
    }
};

class rectangle
{
    int l,b,area;
    public:

    rectangle(int len,int br)
    {
        l=len;
        b=br;
    }

    void area2()
    {
        area=l*b;
        cout<<"\narea of rectangle:"<<area;
    }

    operator triangle()
    {
        triangle temp(l,b);
        return temp;
    }
};

int main()
{
    rectangle r(6,9);
    triangle t=r;
    t.area1();
    r.area2();
    return 0;   
}
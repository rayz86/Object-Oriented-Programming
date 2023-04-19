#include <iostream>
using namespace std;

class A
{   public:
    int a;
    void setA(int a1)
    { a=a1;}
};

class B: public virtual A
{   public:
    int b;
    void setB(int b1)
    {b=b1;}
};

class C: public virtual A
{   public:
    int c;
    void setC(int c1)
    { c=c1;}
};

class D:public C,public B
{   public:
    void disp()
    {   cout<<"a="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};

int main()
{   D obj;
    obj.setA(2);
    obj.setB(3);
    obj.setC(4);
    obj.disp();
    return 0;
}

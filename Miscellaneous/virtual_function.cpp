#include<iostream>
using namespace std;

class base
{
    public:
    void display() //virtual not mentioned
    {
        cout<<"\ndisplay base";
    }
    virtual void show()
    {
        cout<<"\nshow base";
    }
};

class derived:public base
{
    public:
    void display()
    {
        cout<<"\ndisplay derived";
    }
    void show()
    {
        cout<<"\nshow derived";
    }
};

int main()
{
    base *b;
    base B;
    derived D;
    cout<<"\npointer to base class";
    b=&B;
    b->display(); //points to base::display()
    b->show();    //points to base::show()
    cout<<"\npointer to derived class";
    b=&D;
    b->display(); //points to base::display()
    b->show();    //points to derived::show()
    return 0;   
}
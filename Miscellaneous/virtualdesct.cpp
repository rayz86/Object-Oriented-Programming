#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\nbase const";
    }

    virtual ~base()
    {
        cout<<"\nbase destruct";
    }
};

class derived :public base
{
    public:
    derived()
    {
        cout<<"\nderived const";

        
    }

    ~derived()
    {
        cout<<"\nderived destruct";
    }
};

int main()
{
    base *b= new derived();
    delete b;
    return 0;   
}
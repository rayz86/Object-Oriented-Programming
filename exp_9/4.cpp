#include <iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout << "\nBase Constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "\nBase Destructor\n" << endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout << "\nDerived Constructor" << endl;
    }
    ~Derived()
    {
        cout << "\nDerived Destructor" << endl;
    }
};
int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}
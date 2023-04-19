#include<iostream>
using namespace std;

class a
{   
    public:
    int X;
    void getX(int X)
    {
        cout << endl << "Value of X = " << X;
    }
};

class b: public a
{   
    public :
    int Y;
    void getY(int Y)
    {
        cout << endl << "Value of Y = " << Y;
    }
};

int main()
{
    b obj;
    obj.getX(10);
    obj.getY(20);
    return 0;
}


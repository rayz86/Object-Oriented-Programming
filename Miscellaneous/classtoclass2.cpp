#include <iostream>
using namespace std;

class Square{
    int side;
public:
    Square(){
        side = 0;
    }
    Square(int side){
        this->side = side;
    }
    Square(int base, int height){
        side = (base + height)/2;
    }
    void display1(){
        cout << "side : " << side;
    }
};

class Rectangle{
    int base, height;
public:
    Rectangle(){
        base = 0;
        height = 0;
    }
    Rectangle(int base, int height){
        this->base = base;
        this->height = height;
    }
    void display(){
        cout << "\nBase : " << base << endl << "Height : " << height << endl;
    }
    operator Square()
    {
        Square temp(base,height);
        return temp;
    }
};

int main()
{
    Rectangle r(10, 20);
    Square s=r;
    s.display1();
    r.display();
    return 0;
}
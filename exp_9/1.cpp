#include <iostream>
using namespace std;
class SHAPE {
    protected:
    float length;
    float breadth;
    
    public:
    SHAPE(float l, float b) {
        length = l;
        breadth = b;
    }
    
    virtual void area() = 0;
};

class Triangle : public SHAPE {
    public:
    Triangle(float l=0, float b=0) : SHAPE(l, b) {
    }
    void area() {
        cout << "Area of triangle : " << 0.5*length*breadth << endl;
    }
};

class Rectangle : public SHAPE {
    public:
    Rectangle(float l, float b) : SHAPE(l, b) {
    }
    void area() {
        cout << "Area of Rectangle : " << length*breadth << endl;
    }
};

class Square : public SHAPE {
    public:
    Square(float l, float b=0) : SHAPE(l, b) {
    }
    void area() {
        cout << "Area of Square : " << length*length << endl;
    }
};

int main() {
    SHAPE *s;
    Triangle t(2,3);
    s = &t;
    s -> area();
    Rectangle r(4,5);
    s = &r;
    s -> area();
    Square sq(5);
    s = &sq;
    s -> area();
    return 0;
}
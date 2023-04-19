#include <iostream>
#include <string.h>
using namespace std;
// create generic media class
class Media
{
    protected:
    string title;
    int price;
    public:
    // initialize title and price of publication
    virtual void init()
    {
        cout << "enter title: ";
        cin>>title;
        cout << "enter price: ";
        cin >> price;
    }
    // display title and price
    virtual void display()
    {
        cout << "title: " << title;
        cout << "\nprice: " << price << "\n";
    }
};
class Book: public Media
{
    protected:
    int pages;
    public:
    // init publication and book properties
    void init()
    {
        Media::init();
        cout << "enter pages: ";
        cin >> pages;
    }
    // display publication and book properties
    void display()
    {
        Media::display();
        cout << "pages: " << pages << "\n";
    }
};
class Tape: public Media
{
    protected:
    int length;
    public:
    // init publication and tape properties
    void init()
    {
        Media::init();
        cout << "enter length: ";
        cin >> length;
    }
    // display publication and tape properties
    void display()
    {
        Media::display();
        cout << "length: " << length << "\n";
    }
};

int main ()
{
    // create book and tape objects
    Book b;
    Tape t;
    // initialize them
    cout << "init book: \n";
    b.init();
    cout<<"\n\n";
    cout << "init tape: \n";
    t.init();
    cout<<"\n\n";
    // display their properties
    cout << "display book: \n";
    b.display();
    cout<<"\n\n";
    cout << "display tape: \n";
    t.display();
    return 0;
}
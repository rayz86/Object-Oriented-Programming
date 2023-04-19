#include<iostream>
#include<string>
using namespace std;

class carnivore
{
    string food_carni;
    public:
    void getdatac()
    {
        cout<<"enter food for carnivore:";
        getline(cin,food_carni);
    }
    void disp_carni()
    {
        cout<<food_carni;
    }
};

class herbivore
{
    
    public:
    string food_herbi;
    void getdatah()
    {
        cout<<"enter food for herbivore:";
        getline(cin,food_herbi);
    }
    void disp_herbi()
    {
        cout<<food_herbi;
    }
};

class omnivore: public carnivore, public herbivore
{
    public:
    void display()
    {
        cout<<"food for omnivore: ";
        //cout<<disp_carni()<<" and "<<disp_herbi();
    }
};

int main()
{
    carnivore c;
    herbivore h;
    omnivore o;
    c.getdatac();
    h.getdatah();
    o.display();
    c.disp_carni();
    cout<<" and ";
    h.disp_herbi();
    return 0;
}
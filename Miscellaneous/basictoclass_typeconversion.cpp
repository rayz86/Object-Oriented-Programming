#include<iostream>
using namespace std;
class sample
{
    int hrs, mins;
    public:

    sample()
    {
        hrs=2;
        mins=30;
    }

    sample(int t)
    {
        hrs=t/60;
        mins=t%60;
    }

    void display()
    {
        cout<<"\n"<<hrs<<"hrs "<<mins<<"mins";
    }
};

int main()
{
    sample s1,s2;
    s1.display();
    int duration;
    cout<<"\n\nenter the duration:";
    cin>>duration;
    s2=duration;          // basic to class type
    s2.display();
    return 0;   
}
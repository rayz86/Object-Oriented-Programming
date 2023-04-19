#include<iostream>
using namespace std;
class safe;
class sample
{
    int s;
    public:
    sample(int x)
    {
        s=x;
        display();
    }
    void display()
    {
        cout<<"S="<<s;
    }
    ~sample()
    {
        cout<<"\nDESTRUCTOR CALLED";
    }
    friend void sum(sample s1,safe s2);
};

class safe
{
    int y;
    public:
    safe(int z)
    {
        y=z;
        display();
    }
    void display()
    {
        cout<<"Y="<<y;
    }
    ~safe()
    {
        cout<<"\nDESTRUCTOR SAFE CALLED";
    } 
    friend void sum(sample s1,safe s2);
};

void sum(sample s1,safe s2)
{
    int ans;
    ans=s1.s+s2.y;
    cout<<"SUM: "<<ans;
}

int main()
{
    int n,m;
    cout<<"enter 2 numbers:";
    cin>>n>>m;
    sample s1(n);
    safe s2(m);
    sum(s1,s2);
    return 0;   
}
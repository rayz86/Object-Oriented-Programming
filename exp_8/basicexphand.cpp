#include<iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x==1)
            throw x;
        else if(x==0)
            throw 'x';
        else if(x==-1)
            throw 1.0;
    }
    catch(int a)
    {
        cout<<"ya boi caught an integer";
    }
    catch(char b)
    {
        cout<<"ya boi caught a character";
    }
    catch(double c)
    {
        cout<<"ya boi caught a double variable";
    }
}

int main()
{
    cout<<"handling multiple exceptions\n";
    cout<<"\nX==1"<<endl;
    test(1);
    cout<<"\nX==0"<<endl;
    test(0);
    cout<<"\nX==-1"<<endl;
    test(-1);
    cout<<"\n\nExceptions handled";
    return 0;
}

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int num[10],i,n;
    cout<<"enter the 10 elements:";
    for(i=0;i<10;i++)
    {
        cout<<"\nelement "<<i<<" :";
        cin>>num[i];
    }
    ofstream even,odd;
    even.open("even.txt");
    odd.open("odd.txt");
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
            even<<num[i]<<endl;
        else
            odd<<num[i]<<endl;
    }
    even.close();
    odd.close();

    ifstream evenr,oddr;
    oddr.open("odd.txt");
    evenr.open("even.txt");
    cout<<"------even.txt------";
    while(!evenr.eof() && !evenr.fail())
    {
        cout<<n<<endl;
        evenr>>n;
    }
    cout<<"------odd.txt------";
    while(!oddr.eof() && !oddr.fail())
    {
        cout<<n<<endl;
        oddr>>n;
    }
    evenr.close();
    oddr.close();
    return 0;
}
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name,mfname,item;
    float price;
    int q,n;

    cout<<"enter no of entries:";
    cin>>n;

    fstream file;
    file.open("shop.txt", ios::trunc | ios::in | ios::out);
    
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter name:";
        getline(cin, name);
        cout<<"\nenter manufacter:";
        getline(cin, mfname);
        cout<<"\nenter price:";
        cin>>price;
        cout<<"\nenter quantity:";
        cin>>q;

        file<<name<<endl;
        file<<mfname<<endl;
        file<<price<<endl;
        file<<q<<endl;
    }

    cout<<"\nenter the item to search:";
    getline(cin, item);

    while(!file.eof() && !file.fail())
    {
        if(name==item)
        {
            
        }
    }

    return 0;   
}
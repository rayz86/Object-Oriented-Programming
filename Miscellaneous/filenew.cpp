#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int i,n,price;
    string brand;
    ofstream file1("oppo.txt");
    ofstream file2("samsung.txt");

    cout<<"enter the number of entries:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nentry "<<i+1;
        cout<<"\nenter brand name(oppo/samsung):";
        cin>>brand;
        cout<<"enter the price:";
        cin>>price;

        if(brand == "oppo")
        {
            file1<<brand<<endl;
            file1<<price<<endl;
            file1<<endl;
        }
        if(brand == "samsung")
        {
            file2<<brand<<endl;
            file2<<price<<endl;
            file2<<endl;
        }
    }
    file1.close();
    file2.close();

    int max=30;
    char str[max];
    ifstream filer1("oppo.txt");
    ifstream filer2("samsung.txt");

    cout<<"\n----------oppo.txt----------\n";
    while(!filer1.eof() && !filer1.fail())
    {
        filer1.getline(str,max);
        cout<<str<<"\t";
    }
    cout<<"\n----------samsung.txt----------\n";
    while(!filer2.eof() && !filer2.fail())
    {
        filer2.getline(str,max);
        cout<<str<<"\t";
    }

    filer1.close();
    filer2.close();

    return 0;   
}
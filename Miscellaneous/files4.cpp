#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;

    fstream file;
    file.open("test69.txt", ios::trunc | ios::in | ios::out);
    cout<<"enter some text:\n";
    while(file)
    {
        getline(cin, line);
        if(line=="$")
            break;
        file<<line<<endl;
    }

    file.seekg(0, ios::beg);
    cout<<"\n---------------------------------------------";
    cout<<"\nREADING FILE CONTEXT\n";
    while(file)
    {
        getline(file, line);
        cout<<line<<endl;
    }
    file.close();

    return 0;
}
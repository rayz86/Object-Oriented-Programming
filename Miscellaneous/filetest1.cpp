#include <iostream>
#include<string>
#include <fstream>
using namespace std;
int main()
{
    string line;
    fstream file;

    //opening file
    file.open("Details.txt", ios::trunc | ios::in | ios::out);

    cout << "Enter some text: ";
    while(file)
    {
        getline(cin,line);

        if(line == "-1")
            break;

        file << line << "\n";
    }
    file.seekg(0, ios::beg);
 
    while(file)
    {
        getline(file, line);
        cout << line << endl;
    }
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream engi("eng.txt");   ;
    ofstream med("med.txt");
    int i,n;
    string name, roll, course;

    cout << "Enter the Candidate details below :-\n";
    cin>>n;
    for(i = 0; i < n; i++){
        cout << "------CANDIDATE " << i + 1 << "------"  <<endl;
        cout << "Name    : ";
        cin >> name;
        cout << "Course  : ";
        cin >> course;

        if(course == "engineering")  {
            engi << name << "\n";
            engi << course << "\n";
            engi << "\n";
        }
        else if(course == "medical"){
            med << name << "\n";
            med << course << "\n";
            med << "\n";
        }
        else
        cout<<"invalid course";
    }

    engi.close();
    med.close();

    int max=20;
    char str[max];
    ifstream engir("eng.txt");
    ifstream medr("med.txt");
    cout<<"\n\n---------eng.txt---------\n";
    while( !engir.eof() && !engir.fail() )
    {
        engir.getline(str, max);
        cout<<str<<endl;
    }

    cout<<"\n\n---------med.txt---------\n";
    while( !medr.eof() && !medr.fail() )
    {
        medr.getline(str, max);
        cout<<str<<endl;
    }

    engir.close();
    medr.close();

    return 0;
}

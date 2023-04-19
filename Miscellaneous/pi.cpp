#include<iostream>
using namespace std;
int main()
{
    int i;
   string name[6] = "steve";
   for(i = 0; name[i]!= '\0'; i++)
   {
    cout.write(name, i+1);
    cout<<endl;
   }
    return 0;
}


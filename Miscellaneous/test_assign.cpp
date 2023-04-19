#include<iostream>
using namespace std;
void IOS_precision()
{
int count;
cout<<"\n------------------------------\n";
cout<<"implementing IOS :: width and fill\n";
cout.setf(ios:: left, ios::adjustfield);
cout.width(12);
cout.fill('0');
cout<<5.4321;
cout<<"\n------------------------------\n";
}
int main()
{
IOS_precision();
return 0;
}


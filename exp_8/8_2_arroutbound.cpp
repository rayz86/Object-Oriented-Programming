#include <iostream>
using namespace std;
int size=5;
int main()
{
   int a[size],n,s,t,i;

   try
   {
      cout<<"enter elements of array:";
      for(i=0;i<size;i++)
      {
         cin>>a[i];
      }
      cout<<"\nenter a position to find element val:";
      cin>>s;
      if(s>size)
      {
         throw s;
      }
      else
      cout<<"\nelement at pos["<<s<<"] is:"<<a[s-1];
   }
   catch(int sr)
   {
      cout<<"\nexception caught";
   }
}

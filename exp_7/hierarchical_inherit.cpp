#include<iostream>
#include <string>
using namespace std;
class vehichle
{  protected:
    string vbrand;
    string vcolor;
    void setVData()
    {
        cout<<"\nenter vehicle brand and color:\n";
        cin.clear();
        cin>>vbrand>>vcolor;
    }
    void dispVData()
    {   cout<<"\n\nvehicle brand:"<<vbrand<<endl;
        cout<<"vehicle color:"<<vcolor<<endl;
    }
};
class FourWheeler: public vehichle
{   string vtype;
    string vname;
    public:
    void setFWData()
    { 
        cout<<"ENTER DETAILS FOR 4 WHEELER:";
        setVData();
      cout<<"enter vehicle type and name:\n";
      cin>>vtype>>vname;
    }
    void dispFWData()
    {   
        cout<<"\n\nDISPLAYING FOUR WHEELER CONTENT:"; 
        dispVData();
        cout<<"vehichle type:"<<vtype<<endl;
        cout<<"vehicle name:"<<vname<<endl;
    }
};

class TwoWheeler: protected vehichle
{ public :
    string vtype;
    string vname;
    void setTWData()
    { 
        cout<<"ENTER DETAILS FOR 2 WHEELER:";
        setVData();
      cout<<"enter 2 wheeler type and name \n";
      cin>>vtype>>vname;
    }
    void dispTWData()
    {   
        cout<<"\n\nDISPLAYING TWO WHEELER CONTENT:";
        dispVData();
        cout<<"vehichle type:"<<vtype<<endl;
        cout<<"vehicle name:"<<vname<<endl;
    }
};

int main()
{ TwoWheeler tw;
  FourWheeler fw;
  tw.setTWData();
  fw.setFWData();
  tw.dispTWData();
  fw.dispFWData();
  return 0;
}

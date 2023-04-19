/*=======================================
Lab ID:2.6
Program title: box surface area and volume
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: box surface area and volume
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/
#include<iostream>
using namespace std;

class box
{
    private:
    float lt, br, ht;
    public:
    void setlen(float len) { lt=len; }
    void setbth(float bth) { br=bth; }
    void sethgt(float hgt) { ht=hgt; }

    float getlen() { return lt; }
    float getbth() { return br; }
    float gethgt() { return ht; }

    float calsa()
    {
        float sa;
        sa=2*lt*br+2*lt*ht+2*ht*br;
        return sa;
    }

    float calvol()
    {
        float vol;
        vol=lt*br*ht;
        return vol;
    }

    void display()
    {
        cout<<"Length: "<<getlen()<<endl;
        cout<<"Breadth: "<<getbth()<<endl;
        cout<<"Height: "<<gethgt()<<endl;
        cout<<"Surface Area: "<<calsa()<<endl;
        cout<<"Volume: "<<calvol()<<endl;
    }

};


int main()
{
    box obj[20];

    float len, bth, hgt, sa, vol;
    int i,n;

    cout<<"enter the total number of objects:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter length of object["<<i+1<<"]:"<<endl;
        cin>>len;
        cout<<"enter breadth of object["<<i+1<<"]:"<<endl;
        cin>>bth;
        cout<<"enter height of object["<<i+1<<"]:"<<endl;
        cin>>hgt;
        obj[i].setlen(len);
        obj[i].setbth(bth);
        obj[i].sethgt(hgt);
        obj[i].calsa();
        obj[i].calvol();
    }

    for(i=0;i<n;i++)
    {
        cout<<"Box Object"<<i+1<<":"<<endl;
        obj[i].display();
        cout<<endl;
    }

}

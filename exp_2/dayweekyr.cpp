/*=======================================
Lab ID:2.3
Program title: day month year
Author: Rayyan Shaikh
Roll no.: 21co43
Language: cpp
Class: Comp b
Due Date:
=========================================
Description: day month year
Input:
Output:
Algorithm:
Pre-requisite:
Known bugs:
=======================================*/

#include<iostream>
using namespace std;

class date
{
    int day,month,year;

public:

    void set_day(int d)
    {
        day=d;
    }

    void set_month(int m)
    {
        month=m;
    }

    void set_year(int y)
    {
        year=y;
    }

    int get_day()
    {
        return day;
    }

    int get_month()
    {
        return month;
    }

    int get_year()
    {
        return year;
    }
};

int main()
{
    date d1;

    d1.set_day(14);
    d1.set_month(9);
    d1.set_year(2022);

    cout<<d1.get_day()<<"/"<<d1.get_month()<<"/"<<d1.get_year();
    return 0;
}


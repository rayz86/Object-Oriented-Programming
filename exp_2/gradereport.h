#include<string.h>
using namespace std;

namespace grade_rep
{
    class student
    {
        int roll;
        string sname;
        string bname;

    public:
        void setroll(int r)
        {roll=r;}

        void setsname(string n){sname=n;}

        void setbname(string b){bname=b;}

        int getroll(){return roll;}

        string getsname(){return sname;}

        string getbname(){return bname;}
    };

    class report
    {
        int mk1,mk2,mk3,per;
        string grade;

    public:
        void setmk1(int m1){mk1=m1;}
        void setmk2(int m2){mk2=m2;}
        void setmk3(int m3){mk3=m3;}

        void computePercent()
        { per=(mk1+mk2+mk3)*100.00/300.00;}

        void computeGrade()
        {
            if(per>=70)
                {grade="Distinction";}
            else if(per>=60 && per <70)
                {grade="FIRST";}
            else if(per>=50 && per <60)
                {grade="SECOND";}
            else if(per>=40 && per <50)
                {grade="PASS";}
            else
                {grade="FAIL";}
        }
        int getmk1(){return mk1;}
        int getmk2(){return mk2;}
        int getmk3(){return mk3;}
        float getPercent(){return per;}
        string getGrade(){return grade;}

    };
}


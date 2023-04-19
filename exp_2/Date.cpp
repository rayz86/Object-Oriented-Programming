#include<iostream>
using namespace std;
class Date {  //CLASS DECLARATION
    private:
        int day, month, year;
    public : //SETTER AND GETTER FUNCTIONS
        void setDate() {  //FUNCTION TO SET DATE
            cout<<"Enter the full date in [DD MM YYYY] format : ";
            cin>>day>>month>>year;
        }
        void getDate() {  //FUNCTION TO GET DATE
            cout<<endl<<"Date you entered : "<<endl;
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
};
int main() {

    Date D1;  //CREATING OBJECT
    D1.setDate();  //CALLING SETTER AND GETTER FUNCTIONS
    D1.getDate();
    return(0);
}

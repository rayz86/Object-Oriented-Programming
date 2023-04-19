#include <iostream>  //HEADER FILES REQUIRED...
#include <cstring>   //FOR STRING CONCEPTs...
#include <iomanip>   //FOR MANIPULATOR CONCEPTs...
#include <fstream>   //FOR FILE HANDLING CONCEPTS...
#include <conio.h>   //FOR OTHER IMP.FUNCTION CONCEPTS...
#include <stdlib.h>  //FOR OTHER IMP. FUNCTION CONCEPTs...
#include <windows.h> //FOR TIME DELAY CONCEPT...
using namespace std;

int n, checkBr, checkDp;  //GLOBAL VARIABLE CONCEPTS...

class CollegeStudent {  //STUDENT CLASS...
    protected :
        string sRoll;
        string sName;
        string sEmail;
        string sBranch;
    public :

        void setSDetails();    //FUNCTION TAKES THE STUDENT DETAILS FROM USER...
        int checkSBranch();    //FUNCTION CHECKS THE BRANCH FOR INSERTION OF STUDENT DETAILS...
        void createSFile();    //FUNCTION CREATES AND REGISTERS STUDENT DETAILS INPUTTED, TO FILE...
        void searchSFile();    //FUNCTION SEARCHES FOR PARTICULAR STUDENT ENTRY(IN FILE)...
        void printAllCompS();  //FUNCTION PRINTS DETAILS OF ALL STUDENTS IN PARTICULAR DEPARTMENTS...
        void printAllElecS();  //.....
        void printAllMechS();  //.....
};
class CollegeTeacher {  //TEACHER CLASS...
    protected :
        string tID;
        string tName;
        string tQualification;
        string tDepartment;
    public :
        void setTDetails();    //FUNCTION TAKES THE TEACHER DETAILS FROM USER...
        int checkTBranch();    //FUNCTION CHECKS THE BRANCH FOR INSERTION OF TEACHER DETAILS...
        void createTFile();    //FUNCTION CREATES AND REGISTERS TEACHER DETAILS INPUTTED, TO FILE...
        void searchTFile();    //FUNCTION SEARCHES FOR PARTICULAR TEACHER ENTRY(IN FILE)...
        void printAllHumT();   //FUNCTION PRINTS DETAILS OF ALL TEACHERS IN PARTICULAR DEPARTMENTS...
        void printAllCompT();
        void printAllElecT();
        void printAllMechT();
};
class CollegeProcess : public CollegeStudent, public CollegeTeacher {  // MULTIPLE INHERITANCE CONCEPT...
    public :
        void mainPage();      //FUNCTION INCLUDES THE MAIN OPERATION PAGE...
        void loginPage();     //FUNCTION INCLUDES THE LOGIN PAGE...
        void externalPage();  //FUNCTION INCLUDES THE DEFAULT VISIBLE PAGE...
        inline void printHeader();       //FUNCTION PRINTS HEADER FOR EACH PAGE...
        inline void personalInfoPage();  //FUNCTION PRINTS THE PROJECT & CREATOR DETAILS...
};

void CollegeStudent::setSDetails() {  //TO SET STUDENT DETAILS (Registration of new Student)...
    cin.ignore(); //TO FLUSH THE STREAM...
    cout << "\n\t\t\tEnter Name : "; getline(cin, sName);
    cout << "\t\t\tEnter Roll Number : "; getline(cin, sRoll);
    cout << "\t\t\tEnter College Email : "; getline(cin, sEmail);
    cout << "\t\t\tEnter Branch : "; getline(cin, sBranch);
}
int CollegeStudent::checkSBranch() {  //CHECKS THE BRANCH & RETURNS A VALUE....
    string Comp("Computer"), Elec("Electronics"), Mech("Mechanical");

    if(sBranch == Comp) { return(1); }
    else if(sBranch == Elec) { return(2); }
    else if(sBranch == Mech) { return(3); }
    else { return (0); }
}
void CollegeStudent::createSFile() {  //ACCEPTS A VALUE & ACCORDINGLY OPENS RESPECTIVE FILE...

    ofstream out;
    for(int i=0; i<1; i++) {
        if(checkBr == 1) {
            out.open("ComputerEngS.txt", ios::app);  //OPENING FILE IN APPEND MODE...
            out << sName << endl;
            out << sRoll << endl;
            out << sBranch << endl;
            out << sEmail << endl;
            out.close();
        } else if(checkBr == 2) {
            out.open("ElectronicsEngS.txt", ios::app);
            out << sName << endl;
            out << sRoll << endl;
            out << sBranch << endl;
            out << sEmail << endl;
            out.close();
        } else if(checkBr == 3) {
            out.open("MechanicalEngS.txt", ios::app);
            out << sName << endl;
            out << sRoll << endl;
            out << sBranch << endl;
            out << sEmail << endl;
            out.close();
        } else { cout << "\t\t\tInvalid "; }
   }
   out.open("Student.txt", ios::app);  // THIS PART SAVES ALL ENTERED DETAILS IN ONE COMMON FILE...
   out << sName << endl;
   out << sRoll << endl;
   out << sBranch << endl;
   out << sEmail << endl;
   out.close();
}
void CollegeStudent::searchSFile() {  //SEARCHES FOR A PARTICULAR ENTRY...
    ifstream in;
    string searchsName;
    CollegeProcess P;
    P.printHeader();
    cout << "\n\t\t\tEnter Name of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
    getline(cin, searchsName);

    in.open("Student.txt");
    int count = {};
    string str1, str2, str3, str4;
    while(!in.eof() && !in.fail()) {
        in >> str1;
        in >> str2;
        in >> str3;
        in >> str4;
        if(searchsName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
            count++;
            cout << "\n\n\t\t\tRequired Details : \n";
            cout << "\n"
                 << "\t\t\tName          : " << setw(25) << str1 << endl
                 << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                 << "\t\t\tBranch        : " << setw(25) << str3 << endl
                 << "\t\t\tCollege Email : " << setw(25) << str4 << endl;
            break;
        }
    }
    in.close();
    if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
}

void CollegeTeacher::setTDetails() {  //TO SET TEACHER DETAILS (Registration of new Teacher)
    cin.ignore();  //TO FLUSH THE STREAM...
    cout << "\n\t\t\tEnter Full Name : "; getline(cin, tName);
    cout << "\t\t\tEnter ID : "; getline(cin, tID);
    cout << "\t\t\tEnter Qualification : "; getline(cin, tQualification);
    cout << "\t\t\tEnter Department : "; getline(cin, tDepartment);
}
int CollegeTeacher::checkTBranch() {  //CHECKS THE BRANCH & RETURNS A VALUE....
    string Comp("Computer"), Elec("Electronics"), Mech("Mechanical"), Hum("Humanities");

    if(tDepartment == Comp) { return(1); }
    else if(tDepartment == Elec) { return(2); }
    else if(tDepartment == Mech) { return(3); }
    else if(tDepartment == Hum) { return(4); }
    else { return (0); }
}
void CollegeTeacher::createTFile() {  //TO REGISTER DETAILS TO A FILE
    ofstream out;

    for(int i=0; i<1; i++) {
        if(checkDp == 1) {
            out.open("ComputerEngT.txt", ios::app);  //OPENING FILE IN APPEND MODE...
            out << tName << endl;
            out << tID << endl;
            out << tQualification << endl;
            out << tDepartment << endl;
            out.close();
        } else if(checkDp == 2) {
            out.open("ElectronicsEngT.txt", ios::app);
            out << tName << endl;
            out << tID << endl;
            out << tQualification << endl;
            out << tDepartment << endl;
            out.close();
        } else if(checkDp == 3) {
            out.open("MechanicalEngT.txt", ios::app);
            out << tName << endl;
            out << tID << endl;
            out << tQualification << endl;
            out << tDepartment << endl;
            out.close();
        } else if(checkDp == 4) {
            out.open("HumanitiesEngT.txt", ios::app);
            out << tName << endl;
            out << tID << endl;
            out << tQualification << endl;
            out << tDepartment << endl;
            out.close();
        } else { cout << "\t\t\tInvalid "; }
   }
   out.open("Teacher.txt", ios::app);  // THIS PART SAVES ALL ENTERED DETAILS IN ONE COMMON FILE...
   out << tName << endl;
   out << tID << endl;
   out << tQualification << endl;
   out << tDepartment << endl;
   out.close();
}
void CollegeTeacher::searchTFile() {  //SEARCHES FOR A PARTICULAR ENTRY...
    ifstream in;
    string searchsName;
    CollegeProcess P;
    cout << "\n\t\t\tEnter Name of Teacher to be searched : "; cin.ignore();  //FLUSHING STREAM...
    getline(cin, searchsName);

    in.open("Teacher.txt");
    int count = {};
    string str1, str2, str3, str4;
    while(!in.eof() && !in.fail()) {
        in >> str1;
        in >> str2;
        in >> str3;
        in >> str4;
        if(searchsName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
            count++;
            cout << "\n\n\t\t\tRequired Details : \n";
            cout << "\n"
                 << "\t\t\tName          : " << setw(25) << str1 << endl
                 << "\t\t\tID            : " << setw(25) << str2 << endl
                 << "\t\t\tQualification : " << setw(25) << str3 << endl
                 << "\t\t\tDepartment    : " << setw(25) << str4 << endl;
            break;
        }
    }
    in.close();
    if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
}

void CollegeStudent::printAllCompS() {  //FUNCTION TO PRINT ALL COMPUTER DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("ComputerEngS.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {

        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tRoll no       : " << setw(25) << str2 << endl
             << "\t\t\tBranch        : " << setw(25) << str3 << endl
             << "\t\t\tCollege Email : " << setw(25) << str4 << endl;
        //break;
    }
    in.close();
}
void CollegeStudent::printAllElecS() {  //FUNCTION TO PRINT ALL ELECTRONICS DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("ElectronicsEngS.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {
        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tRoll no       : " << setw(25) << str2 << endl
             << "\t\t\tBranch        : " << setw(25) << str3 << endl
             << "\t\t\tCollege Email : " << setw(25) << str4 << endl;
//        break;
    }
    in.close();
}
void CollegeStudent::printAllMechS() {  //FUNCTION TO PRINT ALL MECHANICAL DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("MEchanicalEngS.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {
        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tRoll no       : " << setw(25) << str2 << endl
             << "\t\t\tBranch        : " << setw(25) << str3 << endl
             << "\t\t\tCollege Email : " << setw(25) << str4 << endl;
//        break;
    }
    in.close();
}

void CollegeTeacher::printAllCompT() {  //FUNCTION TO PRINT ALL COMPUTER DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("ComputerEngT.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {
        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tID            : " << setw(25) << str2 << endl
             << "\t\t\tQualification : " << setw(25) << str3 << endl
             << "\t\t\tDepartment    : " << setw(25) << str4 << endl;
        //break;
    }
    in.close();
}
void CollegeTeacher::printAllElecT() {  //FUNCTION TO PRINT ALL ELECTRONICS DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("ElectronicsEngT.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {
        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tID            : " << setw(25) << str2 << endl
             << "\t\t\tQualification : " << setw(25) << str3 << endl
             << "\t\t\tDepartment    : " << setw(25) << str4 << endl;
        //break;
    }
    in.close();
}
void CollegeTeacher::printAllMechT() {  //FUNCTION TO PRINT ALL MECHANICAL DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("MechanicalEngT.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {
        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tID            : " << setw(25) << str2 << endl
             << "\t\t\tQualification : " << setw(25) << str3 << endl
             << "\t\t\tDepartment    : " << setw(25) << str4 << endl;
        //break;
    }
    in.close();
}
void CollegeTeacher::printAllHumT() {  //FUNCTION TO PRINT ALL HUMANITIES DEPARTMENT DETAILS...
    ifstream in;
    cout << "\n\n\t\t\tRequired Details : \n";
    in.open("HumanitiesEngT.txt");

    string str1, str2, str3, str4;
    while(in >> str1 >> str2 >> str3 >> str4)
    {
        cout << "\n"
             << "\t\t\tName          : " << setw(25) << str1 << endl
             << "\t\t\tID            : " << setw(25) << str2 << endl
             << "\t\t\tQualification : " << setw(25) << str3 << endl
             << "\t\t\tDepartment    : " << setw(25) << str4 << endl;
        //break;
    }
    in.close();
}


inline void CollegeProcess::printHeader() {  //FUNCTION PRINTS HEADER FOR EACH PAGE...
    cout << "\n\n\n\t\t-------------------------------------------------------------------------------------" << endl
         << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<| COLLEGE MANAGEMENT SYSTEM |>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
         << "\t\t-------------------------------------------------------------------------------------" << endl
         << "\t\t\t\t\t\t\t\t\t    Creator : Haysten_D_Costa\n"
         << "\t\t\t\t\t\t\t\t\t\t\t       21co56\n";
}
inline void CollegeProcess::personalInfoPage() {  //FUNCTION PRINTS THE PROJECT & CREATOR DETAILS...
    printHeader();
    cout << "\n\n\n\t\t--------------------------------------------\n"
         << "\t\tPROGRAMMER DETAILS :                   \n"
         << "\t\t--------------------------------------------\n"
         << "\t\t* NAME     : Haysten D'costa           \n"
         << "\t\t* ROLL NO. : 21co56                    \n"
         << "\t\t* GENDER   : Male                      \n"
         << "\t\t* COURSE   : BE Computer Engineering   \n"
         << "\t\t* SEMESTER : SEM III                   \n"
         << "\t\t* YEAR     : 2nd Year                  \n"
         << "\t\t* CLASS    : Comp B                    \n"
         << "\t\t* BATCH    : P3                        \n"
         << "\t\t* CONTACT  : 7083551411                \n"
         << "\t\t* EMAIL    :                           \n"
         << "\t\t  -> (College)  21co56@gmail.com       \n"
         << "\t\t  -> (Personal) haystend@gmail.com     \n"
         << "\t\t------------------------------------------------------------------------------\n"
         << "\t\tPROGRAM DETAILS : \n"
         << "\t\t------------------------------------------------------------------------------\n"
         << "\t\t* CREATED BY     : Master Haysten D'costa\n"
         << "\t\t* SPECIALITY     : Object Oriented Programming Concepts\n"
         << "\t\t* PURPOSE        : OOPS Mini-Project\n"
         << "\t\t* ABOUT          : College Management System\n";

    cout << "\n\n\t\t\t\t";
    system("pause");
    //cout << "\n\n\n\t\tEnter any key to Continue....."; getch();
}
void CollegeProcess::loginPage() {  //TO SIGN IN TO THE SYSTEM
    string password;
    system("cls");
    printHeader();
    int ch;

    cout << "\n\t\t\t..... Enter Password : "; ch=getch();
    while(ch != 13) {
        password.push_back(ch);
        cout << '*';
        ch = getch();
    }
    if(password == "User123") {
        cout << "\n\n\n\t\t\tAccess Granted ! \n\t\t\t";
        system("pause");
        system ("cls");
    } else {
        static int count = {};
        count ++;
        cout << "\tAttempt..." << count ;
        cout << "\n\n\n\t\t\tAccess Denied ! . . . \n\t\t\t";
        if((count%5) == 0) {
            count = 0;
            for(int i=15; i>=0; i--) {
                system("cls");
                printHeader();
                cout << "\n\n\t\t\tTry Again after : " << i <<"s . . .\n\t\t\t";
                Sleep(1000);
            }
        }
        system("pause");
        system("cls");
        loginPage();
    }
    system("cls");
    printHeader();
    mainPage();
}
void CollegeProcess::externalPage() {  //DEFAULT PAGE
    int choice;
    do {
        system("cls");
        printHeader();
        cout << "\n\t\t\t1 <- To Enter Login Page....." << endl
             << "\t\t\t2 <- To know more about program....." << endl
             << "\t\t\t0 <- To Exit program....." << endl
             << "\n\t\t ..... Enter your choice : "; cin >> choice;
        switch(choice) {
            case 1 :loginPage();
                    break;
            case 2 :system("cls");
                    personalInfoPage();
                    break;
            case 0 :system("cls");
                    printHeader();
                    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t   .....THANK YOU !.....\n\n\n\n\n";
                    break;
            default:cout << endl << "Incorrect Choice Entered ! " << endl;
        }
    } while(choice != 0);
}
void CollegeProcess::mainPage() {  //MAIN REGISTRATION FUNCTION
    int choice;
    do {
        system("cls");
        printHeader();
        cout << endl << "\t\t\t1 -> Students Section....." << endl
             << "\t\t\t2 -> Teachers Section....." << endl
             << "\t\t\t0 -> Log Out....." << endl
             << "\n\t\t ..... Enter your choice : "; cin >> choice;
        switch(choice) {
            case 1 : {
                do {
                    system("cls");
                    printHeader();
                    cout << "\n\t\t\t1 -> Register New Student....." << endl
                        << "\t\t\t2 -> Search For Student..... " << endl
                        << "\t\t\t3 -> Print all Details of Department....." <<endl
                        << "\t\t\t0 -> Exit Page....." << endl
                        << "\n\t\t   .....Enter your choice : "; cin >> choice;
                    switch(choice) {
                        case 1 :cout << "\t\t\t";
                                system("pause");
                                system("cls");
                                printHeader();
                                cout << "\n\t\t\tEnter no. of Entries : "; cin >> n;
                                for(int i=0; i<n; i++) {
                                    CollegeProcess P[10];
                                    P[i].setSDetails();
                                    checkBr = P[i].checkSBranch();
                                    P[i].createSFile();
                                }
                                break;
                        case 2 :
                                system("cls");
                                searchSFile(); cout << "\n\n\t\t\t";
                                system("pause");
                                break;
                        case 3 :
                            do {
                                system("cls");
                                printHeader();
                                cout << "\n\t\t\t1 -> Display Students Registered for Computer Engineering....." << endl
                                     << "\t\t\t2 -> Display Students Registered for Electronics Engineering....." << endl
                                     << "\t\t\t3 -> Display Students Registered for Mechanical Engineering....." << endl
                                     << "\t\t\t0 -> Exit Page....." << endl
                                     << "\n\t\t ..... Enter your choice : "; cin >> choice;
                                switch(choice) {
                                    case 1 :{
                                            system("cls");
                                            printHeader();
                                            printAllCompS();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 2 :{
                                            system("cls");
                                            printHeader();
                                            printAllElecS();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 3 :{
                                            system("cls");
                                            printHeader();
                                            printAllMechS();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 0 :return;
                                            break;
                                    default:
                                            cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                                            cout << "\n\t\t\t";
                                            system("pause");
                                }
                            } while(choice != 0);
                        case 0 :return;
                                break;
                        default:cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                                cout << "\n\t\t\t";
                                system("pause");
                    }
                } while(choice != 0);

            } break;
            case 2 : {
                do {
                    system("cls");
                    printHeader();
                    cout << "\n\t\t\t1 -> Register New Teacher....." << endl
                         << "\t\t\t2 -> Search For Teacher..... " << endl
                         << "\t\t\t3 -> Print all Details of Department....." <<endl
                         << "\t\t\t0 -> Exit Page....." << endl
                         << "\n\t\t ..... Enter your choice : "; cin >> choice;
                    switch(choice) {
                        case 1 :
                            cout << "\n\t\t\t";
                            system("pause");
                            system("cls");
                            printHeader();
                            cout << "\n\t\t\tEnter no. of Entries : "; cin >> n;
                            for(int i=0; i<n; i++) {
                                CollegeProcess P[10];
                                P[i].setTDetails();
                                checkDp = P[i].checkTBranch();
                                P[i].createTFile();
                            }
                            break;
                        case 2 :
                                system("cls");
                                printHeader();
                                searchTFile(); cout << "\n\n\t";
                                system("pause");
                                break;
                        case 3 :
                            do {
                                system("cls");
                                printHeader();
                                cout << "\n\t\t\t1 -> Display Teachers in Computer Department....." << endl
                                     << "\t\t\t2 -> Display Teachers in Electronics Department....." << endl
                                     << "\t\t\t3 -> Display Teachers in Mechanical Department....." << endl
                                     << "\t\t\t4 -> Display Teachers in Humanities Department....." << endl
                                     << "\t\t\t0 -> Exit Page....." << endl
                                     << "\n\t\t ..... Enter your choice : "; cin >> choice;
                                switch(choice) {
                                    case 1 :{
                                            system("cls");
                                            printHeader();
                                            printAllCompT();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 2 :{
                                            system("cls");
                                            printHeader();
                                            printAllElecT();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 3 :{
                                            system("cls");
                                            printHeader();
                                            printAllMechT();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 4 :{
                                            system("cls");
                                            printHeader();
                                            printAllHumT();
                                            cout << "\n\t\t\t";
                                            system("pause");
                                            } break;
                                    case 0 :return;
                                            break;
                                    default:
                                            cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                                            cout << "\n\t\t\t";
                                            system("pause");
                                }
                            } while(choice != 0);
                        case 0 :return;
                                break;
                        default:cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                                cout << "\n\t\t\t";
                                system("pause");
                    }
                } while(choice != 0);
            } break;
            case 0 :return;
                    break;
            default:cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                    cout << "\n\t\t\t";
                    system("pause");

        }
    } while(choice != 0);
}
int main() {
    CollegeProcess P; //MAIN CLASS WHICH DERIVES INFO...

    P.externalPage();

    return(0);
}

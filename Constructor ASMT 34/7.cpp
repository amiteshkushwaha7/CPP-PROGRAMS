#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int studentId, studentRollNum;
        char studentName[20]={0}, studentCourse[50]={0}, studentAddress[50]={0};
    
    public:
        Student()
        {
            cout <<"Enter Student's Data:"<<endl;
            cout <<"Id: ";
            cin >>studentId;

            cout <<"Roll Number: ";
            cin >>studentRollNum;

            cin.ignore();
            cout <<"Name: ";
            cin.getline(studentName, 20);

            cout <<"Course: ";
            cin.getline(studentCourse, 50); 

            cout <<"Address: ";
            cin >>studentAddress;
        }

        void getStudentDetails()
        {
            cout <<endl <<"Student Details:"<<endl;
            cout <<"Id: "<<studentId <<endl <<"Roll Number: "<<studentRollNum <<endl <<"Name: " <<studentName <<endl <<"Course: " <<studentCourse <<endl <<"Address: " <<studentAddress;
        }

};

int main()
{
    Student std;
    std.getStudentDetails();

    return 0;
}
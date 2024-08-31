#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_num;
        string name;
        int age;
    
    public:
        void setStudent()
        {
            cin >>roll_num;

            cin.ignore();
            getline(cin, name);

            cin >>age;
        }

        void showStudent(){ cout <<endl <<"Roll Number: "<<roll_num <<endl <<"Name: " <<name <<endl <<"Age: "<<age;}
    
    friend int operator==(Student, Student);
};

int operator==(Student A, Student B)
{
    return ((A.roll_num == B.roll_num) && (A.name == B.name) && (A.age == B.age));
}

int main()
{
    Student std1, std2;
    cout <<"Enter Student1's roll number,name & age:"<<endl;
    std1.setStudent();

    cout <<endl <<"Enter Student2's roll number, name & age: "<<endl;
    std2.setStudent();

    cout <<endl <<"Student1 Details:";
    std1.showStudent();
    cout <<endl <<endl <<"Student2 Details:";
    std2.showStudent();

    
    int i = std1 == std2;
    if(i==1)
        cout <<endl <<endl <<"Both Student Details are same!";
    else
        cout <<endl <<endl <<"Both Student Details are not same!"; 
    return 0;
}
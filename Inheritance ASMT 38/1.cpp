#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    
    protected:
        void setName(string n)
        {name = n;}

        void setAge(int a)
        {age=a;}

    public:
        void getName()
        {cout <<endl <<endl <<"Employee Name: "<<name;}

        void getAge()
        {cout <<endl <<"Employee Age: "<<age;}
};

class Employee : public Person
{
    private:
        float salary;

    public:
        void setEmployee(string s, int A, int sal)
        {setName(s);  setAge(A);  salary = sal;} 

        void showEmployee()
        {getName(); getAge();  cout<<endl <<"Employee Salary: "<<salary;}
};

int main()
{
    string str;
    int ag;
    float sal;
    Employee Emp;

    cout<<"Enter these Employee Details:"<<endl;
    cout<<"Name: ";
    cin>>str;

    cout<<"Age: ";
    cin>>ag;

    cout<<"Salary: ";
    cin>>sal;

    Emp.setEmployee(str, ag, sal);
    Emp.showEmployee();
}
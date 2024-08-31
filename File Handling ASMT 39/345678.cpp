#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Employee
{
    private:
        int empId;
        string name;
        float salary;

    public:
        //Constructor to intiliazed private instance members
        Employee():empId(0),name("Unnammed"),salary(0){}

        //Method to initiliazed private instance members though user input
        void inputEmployee()
        {
            int empId; 
            string name; 
            float salary;

            cout<<"Enter Employee Id, Name & Salary-->"<<endl;
            cin>>empId >>name >>salary;
            
            this->empId = empId;  
            this->name = name;   
            this->salary = salary;
        }

        //Method to display Employee Data
        void displayEmployee()
        {cout<<"Employee Id:"<<empId <<", Name:"<<name <<", Salary:"<<salary  <<endl;}

        //Method to add new employee records
        void newEmployeeRecord();

        //Method to display all employee records
        void displayAllEmployeeRecord();

        //Method to search specific employee records using employee id
        void searchEmployee(int);

        //Method to edit employee records
        void editEmployeeRecord(int);

        //Method to delet employee records
        void deletEmployeeRecord(int);

        //Distructor
        ~Employee(){}     
};

void Employee::newEmployeeRecord()
{
    ofstream fout;
    fout.open("Employee.data", ios::app | ios::binary);
    fout.write((char*)this, sizeof(*this));
    fout.close();
}

void Employee::displayAllEmployeeRecord()
{
    ifstream fin;
    fin.open("Employee.data", ios::in);

    if(!fin)
        cout<<"File not found!";

    else
    {
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof())
        {
            displayEmployee();
            fin.read((char*)this, sizeof(*this));
        }
    }

    fin.close();
}

void Employee::searchEmployee(int empId)
{
    ifstream fin;
    bool found = false;

    fin.open("Employee.data", ios::in | ios::binary);
    if(!fin)
        cout<<"File not found!";

    else
    {
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof())
        {
            if(this->empId == empId)
            {
                cout<<endl<<"Employee found!"<<endl;
                this->displayEmployee();
                found = true;
                break;
            }
            fin.read((char*)this, sizeof(*this));
        }
        
        if(!found)
            cout<<"Search failed!"<<endl;
    }

    fin.close();
}

void Employee::editEmployeeRecord(int empId)
{
    fstream finout;
    Employee e;
    bool found = false;

    finout.open("Employee.data", ios::in | ios::out | ios::binary);
    if(!finout)
        cout<<"File not found";
    else
    {
        finout.read((char*)&e, sizeof(e));
        while(!finout.eof())
        {
            if(e.empId == empId)
            {
                found = true;

                cout<<"Enter Employee Name & Salary-->"<<endl;
                cin>>e.name >>e.salary;
                e.empId = empId;
                
                finout.seekp(-sizeof(e), ios::cur);
                finout.write((char*)&e, sizeof(e));
            
                break;
            }
            finout.read((char*)&e, sizeof(e));
        }
         
        if(!found)
            cout<<"Invalid employee id";

        finout.close();
    }
}

void Employee::deletEmployeeRecord(int empId)
{
    ifstream fin;
    ofstream fout;

    fin.open("Employee.data", ios::in | ios::binary);
    fout.open("temp.data", ios::out | ios::binary);
    if(!fin || !fout)
        cout<<"File not found";
    else
    {
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof())
        {
            if(this->empId != empId)
                fout.write((char*)this, sizeof(*this));

            fin.read((char*)this, sizeof(*this));
        }

        fin.close();
        fout.close();

        remove("Employee.data");
        rename("temp.data", "Employee.data");
    }
}


int menu()
{
    int choice;
    cout<<endl<<"1.Store new employee records."<<endl;
    cout<<"2.Display all employee records."<<endl;
    cout<<"3.Search employee using Id."<<endl;
    cout<<"4.Edit employee data using Id."<<endl;
    cout<<"5.Delete employee records given Id."<<endl;
    cout<<"6.Exit."<<endl<<endl;
    cout<<"Enter your choice: ";

    cin>>choice;
    return choice;
}

int main()
{
    Employee emp;
    
    while(true)
    {
        switch (menu()) 
        {
            case 1:
                emp.inputEmployee();
                emp.newEmployeeRecord();
                break;
        
            case 2:
                emp.displayAllEmployeeRecord();
                break;

            case 3:
                int id1;
                cout<<"Enter employee id:";
                cin>>id1;

                emp.searchEmployee(id1);
                break;

            case 4:
                int id2;
                cout<<"Enter employee id:";
                cin>>id2;

                emp.editEmployeeRecord(id2);
                //emp.displayAllEmployeeRecord();
                break;

            case 5:
                int id3;
                cout<<"Enter employee id:";
                cin>>id3;

                emp.deletEmployeeRecord(id3);
                break;

            case 6:
                cout<<"Program end!";
                exit(0);
        
            default:
                cout<<"Invalid Choice";
                exit(0);
        };
    }

    return 0;
}
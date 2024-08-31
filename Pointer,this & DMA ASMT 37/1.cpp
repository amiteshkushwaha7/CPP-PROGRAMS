#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        string personName;
        int personAge;

    public:
        Person(string personName, int personAge) 
        {
            this->personName = personName; 
            this->personAge = personAge;
        }

        void displayPerson()
        {
            cout <<"Name: "<<this->personName <<endl <<"Age: "<<this->personAge;
        } 
};

int main()
{
    string name;
    int age;
    cout <<"Enter the name & age of a person:"<<endl;
    getline(cin, name);
    cin >>age;

    Person Pr(name, age);
    cout <<endl <<"Given Person Details:"<<endl;
    Pr.displayPerson();
}
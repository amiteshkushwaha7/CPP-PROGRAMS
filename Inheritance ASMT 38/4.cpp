#include<iostream>
using namespace std;
class Shape
{
    private:
        string shapename;

    public:
        //Constructor to initialize shapename
        Shape():shapename("Unnammed"){}

        //setter for shapename
        void setShapeName(string s)
        {shapename = s;}

        //shapename getter
        string getShapeName()
        {return shapename;} 

        //Distructor
        ~Shape(){}
};

int main()
{
    string str;
    cout<<"Enter shape name: ";
    getline(cin, str);

    Shape obj;
    obj.setShapeName(str);  //set shapename
    cout<<"Given Shape: "<<obj.getShapeName();   //get shapename

    return 0;
}
#include<iostream>
using namespace std;
class Complex_Number
{
    private:
        int a,b;

    public:
        void setValues()
        {
            cout <<"Enter Real Part of Complex Number: ";
            cin >>a;

            cout <<"Enter Imaginery Part of Complex Number: ";
            cin >>b;
        }

        void showValues()
        {
            cout <<"Entered Complex Number: ";
            cout <<a;
            if(b<0)
                cout <<b <<"i";
            else 
                cout <<"+" <<b <<"i";
        }
};

int main()
{
    Complex_Number obj;
    obj.setValues();
    obj.showValues();
}
#include<iostream>
using namespace std;
class Date
{
    private:
        int DD,MM,Yer;

    public:
        void setDate()
        {
            cout <<"Enter Date!"<<endl;
            cout <<"Day: ";
            cin >>DD;

            cout <<"Month: ";
            cin >>MM;

            cout <<"Year: ";
            cin >>Yer;

            if(DD > 31)
            {
                MM = MM + DD/31;
                DD = DD%31;
            }
            
            if(MM > 12)
            {
                Yer = Yer + MM/12;
                MM = MM%12;
            }
        }

        void showDate()
        {
            cout <<endl <<"Date--> " <<DD <<"-" <<MM <<"-" <<Yer;
        }
};

int main()
{
    Date obj;
    obj.setDate();
    obj.showDate();
}
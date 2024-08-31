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
            cout <<endl <<"Date--> " <<DD <<"-";

            if(MM==1)
                cout <<"January";
            else if(MM==2)
                cout <<"February";
            else if(MM==3)
                cout <<"March";
            else if(MM==4)
                cout <<"April";
            else if(MM==5)
                cout <<"May";
            else if(MM==6)
                cout <<"June";
            else if(MM==7)
                cout <<"July";
            else if(MM==8)
                cout <<"August";
            else if(MM==9)
                cout <<"Septmber";
            else if(MM==10)
                cout <<"October";
            else if(MM==11)
                cout <<"November";
            else if(MM==12)
                cout <<"December";

            cout <<"-" <<Yer;
        }
};

int main()
{
    Date obj;
    obj.setDate();
    obj.showDate();
}
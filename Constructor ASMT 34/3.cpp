#include<iostream>
using namespace std;
class Time
{
    private:
        int Hour,Minute,Second;

    public:
        Time(int H, int M, int S)
        {
            Hour = H;
            Minute = M;
            Second = S;

            if(Second >= 60)
            {
                Minute = Minute + Second/60;
                Second = Second%60;
            }
            
            if(Minute >= 60)
            {
                Hour = Hour + Minute/60;
                Minute = Minute%60;
            }
            
            if(Hour >= 12)
                Hour = Hour%12;
        }

        void showTime()
        {
            cout <<endl <<"Time--> " <<Hour <<"hr " <<Minute <<"min " <<Second <<"sec";
        }
};

int main()
{
    int HH, MM, Sec;

    cout <<"Enter Time!"<<endl;
    cout <<"Hour: ";
    cin >>HH;

    cout <<"Minute: ";
    cin >>MM;

    cout <<"Second: ";
    cin >>Sec;

    Time obj(HH, MM, Sec);
    obj.showTime();
}
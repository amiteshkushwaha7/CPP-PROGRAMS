#include<iostream>
using namespace std;
class Time
{
    private:
        int Hour,Minute,Second;

    public:
        void setTime(int H, int M, int S)
        {
            Hour = H;
            Minute = M;
            Second = S;
        }

        void normaize()
        {
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
            cout <<Hour <<"hr-" <<Minute <<"min-" <<Second <<"sec";
        }

        Time add(Time oj2)
        {
            Time oj;

            oj.Hour = Hour + oj2.Hour;
            oj.Minute = Minute + oj2.Minute;
            oj.Second = Second + oj2.Second;
            
            return oj;
        }

        bool boolIsGreater(Time oj2)
        {
            int x,y;
            x = (Hour*60*60) + (Minute*60) + Minute;
            y = (oj2.Hour*60*60) + (oj2.Minute*60) + oj2.Minute;

            if(x>y)
                return true;
            else
                return false;
        }
};

int main()
{
    Time obj1, obj2, addObj;
    int HH1, MM1, Sec1, HH2, MM2, Sec2;
    bool b;

    cout <<"Enter 2 Times!"<<endl;
    cout <<"Hour1 & Hour2: ";
    cin >>HH1 >>HH2;

    cout <<"Minute1 & Minute2: ";
    cin >>MM1 >>MM2;

    cout <<"Second1 & Second2: ";
    cin >>Sec1 >>Sec2;

    obj1.setTime(HH1, MM1, Sec1);
    obj2.setTime(HH2, MM2, Sec2);

    obj1.normaize();
    obj2.normaize();

    cout <<endl <<"Time1--> ";
    obj1.showTime();
    cout <<endl <<"Time2--> ";
    obj2.showTime();

    addObj = obj1.add(obj2);
    cout <<endl <<endl <<"Normlized:";
    cout <<endl <<"Time1+Time2 = ";
    addObj.normaize();
    addObj.showTime();

    b = obj1.boolIsGreater(obj2);
    if(b==true)
        cout <<endl <<endl <<"Time1 is Greater";
    else
        cout <<endl <<endl <<"Time2 is Greater";
}
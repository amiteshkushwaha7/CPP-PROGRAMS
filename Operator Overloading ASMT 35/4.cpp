#include<iostream>
using namespace std;
class Time
{
    private:
        int HH, MM, Sec;

    public:
        Time(int x, int y, int z) : HH(x), MM(y), Sec(z) {}

        Time operator+(Time T)
        {
            Time temp(0,0,0);
            temp.HH = HH + T.HH;
            temp.MM = MM + T.MM;
            temp.Sec = Sec + T.Sec;
            return temp;
        }

        void getTime(){ cout <<endl <<"Times Sum-> " <<HH <<"hr " <<MM <<"min " <<Sec <<"sec"; }
};

int main()
{
    int i,h1,m1,s1, h2,m2,s2;
    cout <<"Enter Time1 & Time2 Datas:"<<endl;
    cout <<"Hours1 & Hours2: ";
    cin >>h1 >>h2;
    cout <<"Minutes1 & Minutes2: ";
    cin >>m1 >>m2;
    cout <<"Seconds1 & Seconds2: ";
    cin >>s1 >>s2;

    Time t1(h1, m1, s1), t2(h2, m2, s2);
    Time t = t1+t2;   //t1.operator+(t2)
    t.getTime();
  
    return 0;
}
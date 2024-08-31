#include<iostream>
using namespace std;
class Time
{
    private:
        int HH, MM, Sec;

    public:
        Time(int x, int y, int z) : HH(x), MM(y), Sec(z) {}
        void operator ++() { Sec++;}
        void operator ++(int) { Sec++;}
        void getTime(){ cout <<HH <<"hr " <<MM <<"min " <<Sec <<"sec"; }
};

int main() 
{
    int h,m,s;
    cout <<"Enter Datas:"<<endl;
    cout <<"Hours: ";
    cin >>h;
    cout <<"Minutes: ";
    cin >>m;
    cout <<"Seconds: ";
    cin >>s;

    Time t(h, m, s);
    cout <<endl;
    cout <<endl <<"Time-> ";
    t.getTime();

    ++t;   //t.operator ++();
    cout <<endl <<"++Time-> ";
    t.getTime();

    t++;   //t.oprertor ++(int);
    cout <<endl <<"Time++-> ";
    t.getTime();

    return 0;
}
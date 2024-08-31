#include<iostream>
using namespace std;
class Time
{
    private:
        int HH, MM, Sec;

    public:
        friend istream& operator>>(istream&, Time&);
        friend ostream& operator<<(ostream&, Time);
        Time operator=(Time);

};

istream& operator>>(istream &din, Time &t)
{
    cout <<"Enter Time-> hr,min,sec";
    din>>t.HH >>t.MM >>t.Sec;
    return din;
}

Time Time::operator=(Time A)
{
    HH = A.HH;
    MM = A.MM;
    Sec = A.Sec;
    return *this;
}

ostream& operator<<(ostream &dout, Time t)
{
    cout <<"Copid Time-> "<<t.HH <<"hr " <<t.MM <<"min " <<t.Sec;
    return dout;
}

int main()
{
    Time copyTime,tm;
    cin>>tm;

    copyTime =(tm);
    
    cout<<copyTime;

    return 0; 
}
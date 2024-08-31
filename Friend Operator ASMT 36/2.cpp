#include<iostream>
using namespace std;
class Time
{
    private:
        int HH,MM,Sec;

    public:
        friend istream& operator>>(istream &, Time &); 
        friend ostream& operator<<(ostream &, Time);
};

istream& operator>>(istream &din, Time &t){ din>>t.HH >>t.MM >>t.Sec;  return din;}

ostream& operator<<(ostream &dout, Time t){ dout <<t.HH<<"hr " <<t.MM<<"min " <<t.Sec<<"sec"; return dout;}

int main()
{
    Time T1;

    cout <<"Enter time1-> hr,min,sec:";
    cin>>T1;

    cout <<"Time: ";
    cout<<T1;
    
    return 0;
}
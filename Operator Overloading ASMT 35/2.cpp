#include<iostream>
using namespace std;
class Time
{
    private:
        int HH, MM, Sec;

    public:
        Time(int x, int y, int z) : HH(x), MM(y), Sec(z) {}

        int operator>(Time T)
        {
            int x,y;
            x = (HH*60*60) + (MM*60) + Sec;
            y = (T.HH*60*60) + (T.MM*60) + T.Sec;

            if(x>y)
                return 1;
            else if(y>x)
                return -1;
            else  
                return 0;
        }
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

    i = t1>t2;
    if(i==1)
        cout <<"Time1 is Greater!";
    else if(i==-1)
        cout <<"Time2 is Greater!";
    else 
        cout <<"Both Time is Equal!";
  
    return 0;
}
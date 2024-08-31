#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;

    public:
        Distance(int x, int y, int z) : km(x), m(y), cm(z) {}
        Distance operator + (Distance D)
        {
            Distance temp(0,0,0);
            temp.km = km + D.km;
            temp.m = m + D.m;
            temp.cm = cm + D.cm;
            return temp;
        }

        void getDistance()
        {
            if(cm >= 100){ m = m + cm/100; cm = cm%100;}
            
            if(m >= 1000){ km = km + m/1000; m = m%1000;}

            cout <<"Distance Sum = " <<km <<"km " <<m <<"m " <<cm <<"cm"; 
        }
};

int main()
{
    int a1,b1,c1, a2,b2,c2;
    cout <<"Enter Distance1 in Km, M, Cm: ";
    cin >>a1 >>b1 >>c1;
    cout <<"Enter Distance2 in Km, M, Cm: ";
    cin >>a2 >>b2 >>c2;

    Distance dst1(a1,b1,c1), dst2(a2,b2,c2);
    Distance dstAdd = dst1 + dst2;        //dstAdd = dst1.operator+(dst2);
    dstAdd.getDistance();

    return 0;
}
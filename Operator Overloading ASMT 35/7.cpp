#include<iostream>
using namespace std;
class Fraction
{
    private:
        long numerator, denominator;

    public:
        Fraction(long n=0, long d=0) : numerator(n), denominator(d) {}

        void setFraction(long x, long y){ numerator = x; denominator = y;}

        int operator<(Fraction F)
        {
            float x,y;
            x = numerator*F.denominator;
            y = F.numerator * denominator;
            
            if(y<x)
                return 1;
            else if(x<y)
                return -1;
            else
                return 0;
        }
};

int main()
{
    Fraction fct1, fct2;
    long a1,b1, a2,b2;
    int i;
    cout <<"Enter Numerator & Denominator of Fraction1: ";
    cin >>a1 >>b1;
    cout <<"Enter Numerator & Denominator of Fraction2: ";
    cin >>a2 >>b2;

    fct1.setFraction(a1,b1);
    fct2.setFraction(a2,b2);

    i = fct1 < fct2;       //i = fct1.operator<(fct2);
    if(i==1)
        cout <<"Fraction1 is Greater!";
    else if(i==-1)
        cout <<"Fraction2 is Greater!";
    else 
        cout <<"Both Fraction are Same!";

    return 0;
}
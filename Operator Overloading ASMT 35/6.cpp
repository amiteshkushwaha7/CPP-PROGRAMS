#include<iostream>
using namespace std;
class Fraction
{
    private:
        long numerator, denominator;

    public:
        Fraction(long n=0, long d=0) : numerator(n), denominator(d) {}

        void setFraction(long x, long y){ numerator = x; denominator = y;}

        Fraction operator+(Fraction F)
        {
            Fraction temp;
            temp.numerator = (numerator * F.denominator) + (denominator * F.numerator);
            temp.denominator = denominator * F.denominator;
            return temp;
        }

        void getFraction(){cout <<numerator <<"/" <<denominator;}
};

int main()
{
    Fraction fct1, fct2, fct;
    long a1,b1, a2,b2;
    cout <<"Enter Numerator & Denominator of Fraction1: ";
    cin >>a1 >>b1;
    cout <<"Enter Numerator & Denominator of Fraction2: ";
    cin >>a2 >>b2;

    fct1.setFraction(a1,b1);
    fct2.setFraction(a2,b2);

    fct = fct1 + fct2;       //fct = fct1.operator+(fct2);

    cout <<"Sum = ";
    fct.getFraction();

    return 0;
}
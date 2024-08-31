#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, img;

    public:
        Complex(int x=0, int y=0) : real(x), img(y) {}

        void displayComplexNUm()
        {
            cout <<real;
            if(img<0)
                cout <<img <<"i";
            else 
                cout <<"+" <<img <<"i";
        }

    friend Complex operator-(Complex);
};

Complex operator-(Complex A)
{
    A.real = -A.real;
    A.img = -A.img;
     
    return A;
}

int main()
{
    int a1,b1;
    cout <<"Enter real & imaginery part of complex number1: ";
    cin >>a1 >>b1;

    Complex cmp, cmp1(a1, b1);
    
    cmp = -(cmp1); //cmp = operator-(cmp1);

    cout <<endl <<"Negation = ";
    cmp.displayComplexNUm();

    return 0;
}
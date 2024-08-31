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
        
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator*(Complex, Complex);
};

Complex operator+(Complex A, Complex B)
{
    Complex temp;
    temp.real = A.real + B.real;
    temp.img = A.img + B.img;
    return temp;
}

Complex operator-(Complex A, Complex B)
{
    Complex temp;
    temp.real = A.real - B.real;
    temp.img = A.img - B.img;
     
    return temp;
}

Complex operator*(Complex A, Complex B)
{
    Complex temp;
    temp.real = (A.real * B.real) + ((A.real * B.img)*-1);
    temp.img = (A.img * B.real) + (A.img * B.img);
    return temp;
}

int main()
{
    int a1,b1, a2,b2;
    cout <<"Enter real & imaginery part of complex number1: ";
    cin >>a1 >>b1;
    cout <<"Enter real & imaginery part of complex number2: ";
    cin >>a2 >>b2;

    Complex cmpSum,cmpSub,cmpMul, cmp1(a1, b1), cmp2(a2, b2);
    
    cmpSum = cmp1 + cmp2; //cmpSum = operator+(cmp1, cmp2);
    cmpSub = cmp1 - cmp2; //cmpSub = operator-(cmp1, cmp2);
    cmpMul = cmp1 * cmp2; //cmpMul = operator*(cmp1, cmp2);

    cout <<endl <<"Sum = ";
    cmpSum.displayComplexNUm();

    cout <<endl <<"Subtraction = ";
    cmpSub.displayComplexNUm();

    cout <<endl <<"Multiplication = ";
    cmpMul.displayComplexNUm();
    
    return 0;
}
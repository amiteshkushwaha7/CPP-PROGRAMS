#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, img;
    
    public:
        Complex() : real(0), img(0) {}
        Complex(int a, int b) : real(a), img(b) {}

        Complex operator+(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.img = img + C.img;
            return temp;
        }

        Complex operator-(Complex C)
        {
            Complex temp;
            temp.real = real - C.real;
            temp.img = img - C.img;
            return temp;   
        }

        Complex operator*(Complex C)
        {
            Complex temp;
            temp.real = (real * C.real) + ((real * C.img)*-1);
            temp.img = (img * C.real) + (img * C.img);
            return temp;
        }

        bool operator==(Complex C)
        {
            if((real == C.real) && (img == C.img))
                return true;      
        }

        void getComplexNumber()
        {
            cout <<real;
            if(img<0)
                cout <<img <<"i" <<endl;
            else  
                cout <<"+" <<img <<"i" <<endl;
        }
};

int main()
{
    int i,x1,y1, x2,y2;
    cout <<"Enter Real & Imaginery Part of Complex Numbers: "<<endl;
    cout <<"Number1: ";
    cin >>x1 >>y1;
    cout <<"Number2: ";
    cin >>x2 >>y2;
    
    Complex cmpAdd, cmpSub, cmpMul, cmpEqual;
    Complex cmp1(x1,y1);
    Complex cmp2(x2,y2);

    cmpAdd = cmp1 + cmp2;     //cmpAdd = cmp1.operator+(cmp2);
    cmpSub = cmp1 - cmp2;     //cmpAdd = cmp1.operator-(cmp2); 
    cmpMul = cmp1 * cmp2;     //cmpAdd = cmp1.operator*(cmp2);

    cout <<endl <<"Sum = ";
    cmpAdd.getComplexNumber();

    cout <<"Subtraction = ";
    cmpSub.getComplexNumber();

    cout <<"Multiplication = ";
    cmpMul.getComplexNumber();

    i = cmp1 == cmp2;          //cmpAdd = cmp1.operator==(cmp2);
    if(i==1)
        cout <<"Both Numbers are same!";
    else
        cout <<"Both Numbers are not equal";
}
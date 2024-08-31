#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;

    public:
        void setData(int real, int imag)
        {
            this->real = real;
            this->imag = imag;
        }

        void showData()
        {
            cout <<endl <<"Given Real & Imaginery Part:"<<endl;
            cout <<this->real <<" " <<this->imag;
        }
};

void setComplex(int x, int y)
{
    Complex *p = new Complex;
    
    p->setData(x,y);
    p->showData();
}


int main()
{
    int a,b;
    cout <<"Enter real & imaginery part of Complex number:"<<endl;
    cin >>a >>b;

    Complex Cm;
    setComplex(a,b);

    return 0;
}
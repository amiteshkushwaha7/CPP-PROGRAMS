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

int main()
{
    int a,b;
    cout <<"Enter real & imaginery part of Complex number:"<<endl;
    cin >>a >>b;

    Complex Cm;
    Cm.setData(a,b);
    Cm.showData();

    return 0;
}
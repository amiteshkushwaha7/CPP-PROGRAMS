#include<iostream>
using namespace std;
class Complex_Number 
{
    private:
        int a,b;
    
    public:
        void setData(int x, int y)
        {
            a=x;
            b=y;
        }

        void showData()
        {
            cout <<a;
            if(b>=0)
                cout <<"+" <<b <<"i"<<endl;
            else 
                cout <<b <<"i" <<endl;
        }

        Complex_Number add(Complex_Number oj2)
        {
            Complex_Number result;
            result.a = a + oj2.a;
            result.b = b + oj2.b;
            return result;
        }

        Complex_Number subtract(Complex_Number oj2)
        {
            Complex_Number result;
            result.a = a - oj2.a;
            result.b = b - oj2.b;
            return result;
        }

        Complex_Number multiply(Complex_Number oj2)
        {
            Complex_Number result;
            result.a = (a*oj2.a) + ((b*oj2.b)*-1);
            result.b = (a*oj2.b) + (b*oj2.a);
            return result;
        }
};

int main()
{
    Complex_Number obj1, obj2, addObj, subObj, mulObj;
    int n1,m1,n2,m2;

    cout <<"Enter Real Part of Complex Number1 & Number2: ";
    cin >>n1 >>n2;

    cout <<"Enter Imaginery Part of Complex Number1 & Number2: ";
    cin >>m1 >>m2;

    obj1.setData(n1,m1);
    obj2.setData(n2,m2);

    cout <<endl <<"Complex Number1 = ";
    obj1.showData();
    cout <<"Complex Number2 = ";
    obj2.showData();


    addObj = obj1.add(obj2);
    cout <<endl <<"Complex 1 + Complex2 = "; 
    addObj.showData();

    subObj = obj1.subtract(obj2);
    cout <<"Complex 1 - Complex2 = "; 
    subObj.showData();

    mulObj = obj1.multiply(obj2);
    cout <<"Complex 1 * Complex2 = "; 
    mulObj.showData();
}
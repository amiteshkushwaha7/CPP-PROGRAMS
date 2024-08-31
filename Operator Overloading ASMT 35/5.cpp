#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;

    public:
        Numbers(int p, int q, int s): x(p), y(q), z(s) {}
        void operator-(){ x=-x; y=-y; z=-z;}
        void getNumbers(){ cout <<x <<" " <<y <<" " <<z;}
};

int main()
{
    int a,b,c;
    cout <<"Enter 3 Numbers: ";
    cin >>a >>b >>c;

    Numbers num(a,b,c);

    cout <<"Negation of 3 Numbers: ";
    -num;            // num.operator-();
    num.getNumbers();

    return 0;
}
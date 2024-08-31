#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;

    public:
        Circle(float x) { r=x;}

        Circle() { r=0;}

        void getRadius() { cout <<"Redius = "<<r <<endl;}
};

int main()
{
    float a;
    cout <<"Enter redius of circle: ";
    cin >>a;

    Circle c1(a);
    Circle c2;

    c1.getRadius();
    c2.getRadius();

    return 0;
}
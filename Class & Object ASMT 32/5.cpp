#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;

    public:
        void setRadius()
        {
            cout <<"Enter redius of circle: ";
            cin >>r;
        }

        void getRadius()
        {
            cout <<"Redius = "<<r <<endl;
        }

        float area()
        {
            return (3.14*r*r);
        }

        float circumference()
        {
            return (2*3.14*r);
        }
};

int main()
{
    float a,b;
    Circle obj;

    obj.setRadius();
    obj.getRadius();

    a=obj.circumference();
    cout <<"Circumference of circle = "<<a <<endl;

    b=obj.area();
    cout <<"Area of circle = "<<b <<endl;
}
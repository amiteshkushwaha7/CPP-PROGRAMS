#include<iostream>
using namespace std;
class Circle
{
    private:
        float radius;

    public:
        //Non-Parameterized Constructor to Assign radius
        Circle(): radius(0){}

        //function used to assign radius
        void setRadius(float r)
        {radius = r;}

        //function used to return radius of circle
        float getRadius()
        {return radius;}

        //function used to calculate circle area
        float getArea()
        {return (3.14*radius*radius);}

        //Distructor 
        ~Circle(){};
};

class ThickCircle : public Circle
{
    private:
        float thickness;

    public:
        //Non-Parameterized Constructor to Assign thickness
        ThickCircle():thickness(0){}

        //function used to assign thickness
        void setThickness(float t)
        {thickness = t;}

        //function used to return thickness of circle
        float getThickness()
        {return thickness;}

        //function used to calculate thicked portion of circle
        float getArea()
        {
            float R, Area;
            R = thickness + getRadius();
            Area = (3.14*R*R) - Circle::getArea();
            return Area;
        }

        //Distructor
        ~ThickCircle(){

        }
};

int main()
{
    float r,t;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"Enter the thickness of circle: ";
    cin>>t;

    //creat an object of ThickCircle Class
    ThickCircle obj;

    //set the radius of Circle Class
    obj.setRadius(r);

    //set thickness of circle using ThickCircle class
    obj.setThickness(t);

    cout<<endl <<"Circle's Radius: "<<obj.getRadius() <<endl;
    cout<<"Circle's Thickness: "<<obj.getThickness() <<endl;
    cout<<"Circle's Area: "<<obj.Circle::getArea() <<endl;
    cout<<"Thicked Portion Circle's Area: "<<obj.getArea();

    return 0;
}
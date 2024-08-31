#include<iostream>
#include<math.h>
using namespace std;
class Coordinate
{
    private:
        float x,y;

    public:
        //Constructor to initialize x,y
        Coordinate():x(0), y(0) {}
    
        void setCoordinate(float i, float j)
        {x=i, y=j;}

        //Mathod to display coordinate
        void getCoordinate()
        {cout<<"("<<x <<","<<y<<")";}

        //Mathod to calculat distance from origin
        float getDistance()
        {
            float distance;
            distance = pow((pow(x,2) + pow(y,2)),0.5);
            return distance;
        }

        //Mathod to calculate distance b/w two coordinates
        float getDistance(Coordinate temp)
        {
            float distance;
            distance = pow((pow((x-temp.x), 2) + pow((y-temp.y), 2)), 0.5);
            return distance;
        }

        //Distructor
        ~Coordinate(){}
};

int main()
{
    float a1,b1, a2,b2;
    cout<<"Enter 2 Coordinate(x-axies, y-axies): ";
    cout<<"Coordinate1: ";
    cin>>a1 >>b1;
    cout<<"Coordinate2: ";
    cin>>a2 >>b2;

    Coordinate obj1, obj2;
    obj1.setCoordinate(a1,b1); //initialize cordiante1
    obj2.setCoordinate(a2,b2); //initialize cordinate2

    cout<<endl<<"Given Coordinate1: ";
    obj1.getCoordinate();  //display coordinate1
    cout<<endl <<"Given Coordinate2: ";
    obj2.getCoordinate();  //display coordinate2

    cout<<endl <<endl <<"Distance from Origin: ";
    cout<<endl <<"Coordinate1: ";
    cout<<obj1.getDistance();
    cout<<endl <<"Coordinate2: ";
    cout<<obj2.getDistance();

    cout<<endl<<endl <<"Distance b/w Coordinate1 & Coordinate2: ";
    cout<<obj1.getDistance(obj2);

    return 0;
}
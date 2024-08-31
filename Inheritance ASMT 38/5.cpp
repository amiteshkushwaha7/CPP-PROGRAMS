#include<iostream>
#include<math.h>
using namespace std;
class Coordinate
{
    private:
        float x,y;

    public:
        //Constructor to initialize x,y
        Coordinate(int i=0, int j=0):x(i), y(j) {}
    
        void setCoordinate(float val1, float val2)
        {x=val1, y=val2;}

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

class Shape
{
    private:
        string shapename;

    public:
        //Constructor to initialize shapename
        Shape():shapename("Unnammed"){}

        //setter for shapename
        void setShapeName(string s)
        {shapename = s;}

        //shapename getter
        string getShapeName()
        {return shapename;} 

        //Distructor
        ~Shape(){}
};

class StraightLine:public Shape
{
    private:
        Coordinate COD1, COD2;

    public:
        //Constructor to initialize Coordiante object COD1 & COD2
        StraightLine():COD1(0,0), COD2(0,0){}

        void setLine(float val_x1, float val_y1,  float val_x2, float val_y2)
        {
            COD1.setCoordinate(val_x1, val_y1);
            COD2.setCoordinate(val_x2, val_y2);
        }

        void getDistance()
        {cout<<COD1.getDistance(COD2);}

        //Distructor
        ~StraightLine(){}
};

int main()
{
    float a1,b1, a2,b2;
    cout<<"Enter 2 Coordinate(x-axies, y-axies): ";
    cout<<"Coordinate1: ";
    cin>>a1 >>b1;
    cout<<"Coordinate2: ";
    cin>>a2 >>b2;

    StraightLine obj;
    obj.setLine(a1,b1,a2,b2); //initialize COD1 & COD2

    cout<<endl<<endl <<"Distance b/w COD1 & COD2: ";
    obj.getDistance();

    return 0;
}
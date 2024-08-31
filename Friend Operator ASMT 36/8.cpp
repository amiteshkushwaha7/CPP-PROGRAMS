#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y;

    public:
        Coordinate(int n=0, int m=0) : x(n), y(m) {}
        void getCoordinate(){ cout <<endl <<"(" <<x <<"," <<y <<")";}

    friend Coordinate operator,(Coordinate, Coordinate);    
};

Coordinate operator,(Coordinate A, Coordinate B)
{
    Coordinate temp;
    temp.x = (A.x, B.x);
    temp.y = (A.y, B.y);
    return temp;
}

int main()
{
    int a1,b1, a2,b2;
    cout <<"Enter Coordinate1: ";
    cin >>a1 >>b1;
    cout <<"Enter Coordinate2: ";
    cin >>a2 >>b2;

    Coordinate C1(a1,b1), C2(a2,b2);
    Coordinate C3 = (C1,C2);  //operator,(C1, C2);
    C3.getCoordinate();

    return 0;
}
#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    
    public:
        friend istream& operator>>(istream&, Coordinate&);
        friend ostream& operator<<(ostream&, Coordinate);
        friend Coordinate operator,(Coordinate, Coordinate);
};

istream& operator>>(istream &din, Coordinate &t)
{
    din>>t.x >>t.y;
    return din;
}

Coordinate operator,(Coordinate A, Coordinate B)
{
    Coordinate temp;
    temp.x = (A.x, B.y);
    temp.y = (A.y, B.y);
    return temp;
}

ostream& operator<<(ostream &dout, Coordinate t)
{
    cout <<"Coordinate:3 ";
    dout <<"(" <<t.x <<"," <<t.y <<")";
    return dout;
}

int main()
{
    Coordinate c1,c2,c3;
    cout <<"Enter 2 Numbers of Coordinate1: ";
    cin>>c1; //operator>>(cin, cd);

    cout <<"Enter 2 Numbers of Coordinate2: ";
    cin>>c2; //operator>>(cin, cd);

    c3 = (c1, c2); //operator,(c1,c2);
    cout<<c3; //operator<<(cout, cd);

    return 0;
}
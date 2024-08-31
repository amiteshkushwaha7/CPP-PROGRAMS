#include<iostream>
using namespace std;
class Cuboid
{
    private:
        int lenght, breadth, height;

    public:
        Cuboid(int x, int y, int z)
        {
            lenght = x;
            breadth = y;
            height = z;
        }
};

int main()
{
    int l,b,h;
    cout <<"Enter Cubiod's Data:"; 
    cout <<endl <<"Lenght: ";
    cin >>l;
    cout <<"Breadth: ";
    cin >>b; 
    cout <<"Height: ";
    cin >>h;

    Cuboid obj(l, b, h);

    return 0;
}
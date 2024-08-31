#include<iostream>
using namespace std;
void volume(int a, int b, int c)
{
    cout <<"Volume = " <<a*b*c;
}

void volume(int a, int b)
{
    cout <<"Volume = " <<(3.14*a*a*b)/3.0;
}

void volume(int a)
{
    cout <<"Volume = " <<(4*3.14*a*a*a)/3.0;
}

int main()
{
    cout <<"Of which shape's volume you want to calculate?"<<endl;
    cout <<"1.Cuboid" <<endl <<"2.Cone" <<endl <<"3.Sphere"<<endl <<endl;
    
    int n;
    cout <<"Enter Your Choice: ";
    cin >>n;

    switch (n)
    {
    case 1:
        int l,w,h;
        cout <<"Enter length, width and height of cuboid: ";
        cin >>l >>w >>h;
        volume(l,w,h);
        break;

    case 2:
        int r,h1;
        cout <<"Enter radius and height of cone: ";
        cin >>r >>h1;
        volume(r,h1);
        break;
    
    case 3:
        int r1;
        cout <<"Enter radius of sphere: ";
        cin >>r1;
        volume(r1);
        break;

    default:
        cout <<"Invalid choice!";
        break;
    }

}
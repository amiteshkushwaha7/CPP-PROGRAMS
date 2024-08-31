#include<iostream>
#include<math.h>
using namespace std;
void Area(int a);
void Area(int a, int b);
void Area(int a, int b, int c);
int main()
{
    cout <<"Of Which Figure's Area Do You Want to Calculate?" <<endl <<"1. Circle" << endl <<"2. Rectangle" <<endl <<"3. Triangle";
    cout <<endl <<endl;

    int n;
    cout <<"Enter Your Choice: ";
    cin >>n;

    switch (n)
    {
    case 1:
        int r;
        cout <<"Enter Cicle's Radius: ";
        cin >>r;
        Area(r);
        break;

    case 2:
        int l,b;
        cout <<"Enter Length and Breath: ";
        cin >>l >>b;
        Area(l,b);
        break;
    
    case 3:
        int x,y,z;
        cout <<"Enter Length of Triangle: ";
        cin >>x >>y >>z;
        Area(x,y,z);
        break;
    
    default:
        cout <<"Invalid Choice!";
        break;
    }

}

void Area(int a)
{
    float f;
    f=3.14*a*a;
    cout <<"Circle's Area = " <<f;
}

void Area(int a, int b)
{
    cout <<"Rectangle's Area = " <<a*b;
}

void Area(int a, int b, int c)
{
    float s,area;
    s=(a+b+c)/2;

    area = pow((s*(s-a)*(s-b)*(s-c)), 0.5);
    cout <<"Traingle's Area = " <<area;
}
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int x,y,z;
    float s;
    cout <<"Enter Three Numbers!";
    cin >>x >>y >>z;
    s = (x+y+z)/3.0;
    cout <<"Average = " << setprecision(3) << s;
}
#include<iostream>
#include<math.h>
using namespace std;
void Calculate_Power(int x, int y);
int main()
{
    int n,p;
    cout <<"Enter a Number and Power of the Number! ";
    cin >>n >>p;
    Calculate_Power(n,p);
}

void Calculate_Power(int x, int y)
{
    cout <<"Power of "<<x <<" is " <<pow(x,y);
}
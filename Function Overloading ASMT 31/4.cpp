#include<iostream>
using namespace std;
int LCM(int a, int b, int c)
{    
    int n;
    if(a>=b && a>=c)
        n=a;
    else if(b>=a && b>=c)
        n=b;
    else
        n=c;

    while(1)
    {
        if(n%a==0 && n%b==0 && n%c==0)
            return n;

        n++;
    }
    
}

int main()
{
    int x,y,z;
    cout <<"Enter Three Numbers: ";
    cin >>x >>y >>z;

    if(x==0 || y==0 || z==0)
        cout <<"LCM is undefine!";
    else
        cout <<"LCM = " <<LCM(x,y,z);
}
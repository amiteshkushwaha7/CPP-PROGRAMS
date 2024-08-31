#include<iostream>
using namespace std;
int HCF(int x, int y)
{
    if(x==0)
        return y;
    else if(y==0) 
        return x;

    int i;
    (x<y)? i=x: i=y;

    while(i>0)
    {
        if(x%i==0 && y%i==0)
        {
            return i;
        }
        i--;
    }
}
int main()
{
    int a,b;
    cout <<"Enter Two Numbers: ";
    cin >>a >>b;

    if(a>0 || b>0)
        cout <<"HCF = "<<HCF(a,b);
    else if(a==0 && b==0)
        cout <<"HCF is Undefine!";
}
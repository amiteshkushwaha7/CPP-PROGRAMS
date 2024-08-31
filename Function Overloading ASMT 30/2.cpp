#include<iostream>
using namespace std;
int Highest_Value(int x);
int main()
{
    int n,d;
    cout <<"Enter a Digit! ";
    cin >>n;

    d = Highest_Value(n);
    cout <<"Highest Number in the Digit is "<<d;
}

int Highest_Value(int x)
{
    int a,b=-1;
    while(x)
    {
        if(x%10 > b)
            b=x%10;

        x=x/10;
    }
    return b;
}
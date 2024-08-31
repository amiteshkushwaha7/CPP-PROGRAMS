#include<iostream>
using namespace std;
void Check_Number_In_Fib(int);
int main()
{
    int n;
    cout <<"Enter a Number! ";
    cin >>n;

    Check_Number_In_Fib(n);
}

void Check_Number_In_Fib(int x)
{
    int a=-1,b=1,c;
    for(int i=0; i<=x; i++)
    {
        c=a+b;
        a=b;
        b=c;

        if(c==x)
        {
            cout <<"Given Number is in Fibonacci Series!";
            break;
        }
    }

    if(c!=x)
        cout <<"Given Number is not in Fibonacci Series";
}
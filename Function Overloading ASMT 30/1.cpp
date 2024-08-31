#include<iostream>
using namespace std;
void Checking_Prime(int x);
int main()
{
    int n;
    cout <<"Enter a Number! ";
    cin >>n;
    
    Checking_Prime(n);
}

void Checking_Prime(int x)
{
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            cout <<"Given Number is not Prime";
            break;
        }
    }

    if(i==x)
        cout <<"Given Number is Prime";
    else if(x==0 || x==1)
        cout <<"Given Number is not Prime";       
}
#include<iostream>
using namespace std;
void Prime_Factor(int x)
{
    cout <<"All Prime Factor of "<<x <<endl;
    int i,j;
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            for(j=2; j<i; j++)
            {
                if(i%j==0)
                    break;
            }
            if(j==i)
                cout <<i <<endl;
        }
    }
}
int main()
{
    int n;
    cout <<"Enter a number: ";
    cin >>n;

    Prime_Factor(n);
}
#include<iostream>
using namespace std;
int factorial(int n)
{
    int i,fact=1;
    for(i=1; i<=n; i++)
        fact = fact*i;

    return fact;
}

void printPascalTriangle(int row)
{
    int i,j,n,r,nr;
    for(i=0; i<row; i++)
    {
        for(j=1; j<=row-i; j++)
            cout <<" ";

        for(j=0; j<i+1; j++)
        {
            n=factorial(i);
            r=factorial(j);
            nr=factorial(i-j);

            cout <<n/(r*nr);
            cout <<" ";
        }
        cout <<endl;
    }
}

int main()
{
    int row;
    cout <<"Enter total row of Pascal Triangle: ";
    cin >>row;

    printPascalTriangle(row);
}
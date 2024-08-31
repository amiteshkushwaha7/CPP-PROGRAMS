#include<iostream>
using namespace std;
void swap(int &p, int &q);
int main()
{
    int n,m;
    cout <<"Enter Two Numbers: ";
    cin >>n >>m;

    int &n1=n;
    int &m1=m;

    swap(n, m);
    cout <<"Swaping Values is " <<n <<" and " <<m;
}

void swap(int &p, int &q)
{
    int a;
    a=p;
    p=q;
    q=a; 
}
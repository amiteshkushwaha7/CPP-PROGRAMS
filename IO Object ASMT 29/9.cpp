#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout <<"Enter Two Numbers! ";
    cin >>x >>y;

    if(x>y)
        cout <<"Maximum Number = "<<x;
    else if(x==y)
        cout <<"Both Numbers are Equal";
    else 
        cout <<"Maximum Number = "<<y;
}
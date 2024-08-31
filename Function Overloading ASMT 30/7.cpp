#include<iostream>
using namespace std;
void add(int a, int b, int c = 0);
int main()
{
    cout <<"How Many Numbers Do You Want To ADD?" <<endl <<"1. Two Numbers" << endl <<"2. Three Numbers";
    cout <<endl <<endl;
    cout <<"Enter YOur Choice: ";
    int n,x,y,z;
    cin >>n;

    switch (n)
    {
    case 1:
        cout <<"Enter Two Numbers: ";
        cin >>x >>y;
        add(x,y);
        break;

    case 2:
        cout <<"Enter Three Numbers: ";
        cin >>x >>y >>z;
        add(x,y,z);
        break;
    
    default:
        break;
    }
}

void add(int a, int b, int c)
{
    cout <<"Sum = " <<a+b+c;
}
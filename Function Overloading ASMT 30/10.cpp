#include<iostream>
using namespace std;
void add(int x, int y)
{
    cout <<"Sum = " <<x+y;
}

void add(float x, float y)
{
    cout <<"Sum = " <<x+y;
}

void add(int x, float y)
{
    cout <<"Sum = " <<x+y;
}

void add(float x, int y)
{
    cout <<"Sum = " <<x+y;
}

int main()
{
    cout <<"Enter Two Numbers:" <<endl <<"1. Both Numbers are Integer" << endl <<"2. Both Numbers are Real" <<endl <<"3. First Number is Integer and Second Real" <<endl <<"4.First Number is Real and Second Integer";
    cout <<endl <<endl;

    int n;
    cout <<"Enter Your Choice: ";
    cin >>n;

    switch (n)
    {
    case 1:
        int a,b;
        cout <<"Enter Two Integers:";
        cin >>a >>b;
        add(a,b);
        break;

    case 2:
        float x,y;
        cout <<"Enter Two Real Numbers: ";
        cin >>x >>y;
        add(x,y);
        break;
    
    case 3:
        int s;
        float t;
        cout <<"Enter Integer: ";
        cin >>s;
        cout <<"Enter Real Number: ";
        cin >>t;
        add(s,t);
        break;
    
    case 4:
        int i;
        float f;
        cout <<"Enter Real Number: ";
        cin >>f;
        cout <<"Enter Integer: ";
        cin >>i;
        add(f,i);
        break;
    
    default:
        cout <<"Invalid Choice!";
        break;
    }
}

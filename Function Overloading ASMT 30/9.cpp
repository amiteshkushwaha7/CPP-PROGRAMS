#include<iostream>
using namespace std;
void Find_Maximum(int x, int y)
{
    if(x>y)
        cout <<x <<" is Maximum";
    else if(y==x)
        cout <<"Both are equal";
    else
        cout <<y <<" is Maximum";
    
}

void Find_Maximum(float x, float y)
{
    if(x>y)
        cout <<x <<" is Maximum";
    else if(y==x)
        cout <<"Both are equal";
    else
        cout <<y <<" is Maximum";
    
}

void Find_Maximum(int x, float y)
{
    if(x>y)
        cout <<x <<" is Maximum";
    else if(y==x)
        cout <<"Both are equal";
    else
        cout <<y <<" is Maximum";
    
}

void Find_Maximum(float x, int y)
{
    if(x>y)
        cout <<x <<" is Maximum";
    else if(y==x)
        cout <<"Both are equal";
    else
        cout <<y <<" is Maximum";
    
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
        Find_Maximum(a,b);
        break;

    case 2:
        float x,y;
        cout <<"Enter Two Real Numbers: ";
        cin >>x >>y;
        Find_Maximum(x,y);
        break;
    
    case 3:
        int s;
        float t;
        cout <<"Enter Integer: ";
        cin >>s;
        cout <<"Enter Real Number: ";
        cin >>t;
        Find_Maximum(s,t);
        break;
    
    case 4:
        int i;
        float f;
        cout <<"Enter Real Number: ";
        cin >>f;
        cout <<"Enter Integer: ";
        cin >>i;
        Find_Maximum(f,i);
        break;
    
    default:
        cout <<"Invalid Choice!";
        break;
    }
}

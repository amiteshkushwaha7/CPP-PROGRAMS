#include<iostream>
using namespace std;
class Integer
{
    private:
        int num;

    public:
        Integer(int x=0) : num(x) {}
        void getNum() { cout <<endl <<num;}

    friend int operator==(Integer A, Integer B) { return (A.num == B.num);}
    friend int operator !(Integer);
};

int operator !(Integer A) 
{ 
    if(A.num!=0)
        return 1;
    return 0;
}


int main()
{
    int i,j,a1,a2;
    cout <<"Enter 2 Numbers: ";
    cin >>a1 >>a2;

    Integer obj, obj1(a1), obj2(a2);
    
    i = (obj1 == obj2);
    if(i==1)
        cout <<"Both Numbers are Same!";
    else
        cout <<"Both Numbers are not Same!";

    

    j = !(obj1);
    if(j==0)
        cout <<"Numbers = 0";
    else
        cout <<"Numbers != 0";

    return 0;
}
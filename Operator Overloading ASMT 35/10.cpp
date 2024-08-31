#include<iostream>
using namespace std;
class Array
{
    private:
        int size;
        int *p;

    public:
        Array(int s) { size = s; p = (int*)malloc(sizeof(int)*size);}

        void inputArray()
        {
            int i;
            cout <<"Enter Array Inputs: " <<endl;
            for(i=0; i<size; i++)
            cin >>p[i];
        }

        void operator[](int x) 
        { 
            if(x>=0 && x<=size)
                cout<<endl <<"Given Index Value is "<<p[x];
            else 
                cout <<"Given Index is Greater than Array Size!";
        }

        void getArray()
        {
            int i;
            cout <<endl <<"Given Array: " <<endl;
            for(i=0; i<size; i++)
                cout <<p[i] <<" ";
        }

        ~Array() { free(p);}
};

int main()
{
    int a,indx;
    cout <<"Enter the size of Array: ";
    cin >>a;

    Array arrObj(a);
    arrObj.inputArray();
    arrObj.getArray();

    cout <<endl <<endl <<"Enter get value index of given array: ";
    cin >>indx;
    arrObj.operator[](indx);

    return 0;
}
#include<iostream>
using namespace std;
class Array
{
    private:
        int size;
        int *p;

    public:
        //constructor
        Array() 
        { 
            size = 0; 
            p = nullptr;
        }

        //copy constructor
        Array(Array &A)
        {
            size = A.size;
            p = new int[size];
            
            for(int i=0; i<size; i++)
                p[i] = A.p[i];
        }

        void inputArray(int s)
        {
            size = s;
            p = new int[size];

            for(int i=0; i<size; i++)
                cin >>p[i];
        }

        Array operator=(Array A)
        {
            size = A.size;
            p = new int[size];
            
            for(int i=0; i<size; i++)
                p[i] = A.p[i];

            return *this;
        }

        void displayArray()
        {
            int i;
            for(i=0; i<size; i++)
                cout <<p[i] <<" ";
        }
        
        ~Array(){delete[]p;}
};

int main()
{
    int s;
    cout <<"Enter the size of array: ";
    cin >>s;

    Array arrObj;
    cout <<endl <<"Enter " <<s <<" Numbers of Array1:"<<endl;
    arrObj.inputArray(s);

    cout <<endl <<"Given Array:"<<endl;
    arrObj.displayArray();
 
    Array copyArray;
    copyArray = arrObj; //Array copyArray = arrObj;
    cout<<endl <<"Copy Array:"<<endl;
    copyArray.displayArray();

    return 0;
}
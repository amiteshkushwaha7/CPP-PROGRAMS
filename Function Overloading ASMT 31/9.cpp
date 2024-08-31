#include<iostream>
using namespace std;
void Swap_Array(int a1[], int a2[], int s)
{
    int i,k;
    for(i=0; i<s; i++)
    {
        k=a1[i];
        a1[i]=a2[i];
        a2[i]=k;
    }
}

int main()
{
    int size;
    cout <<"Enter the size of array: ";
    cin >>size;

    int i,arr1[size],arr2[size];

    cout <<"Enter "<<size <<" elements of Array1: " <<endl;
    for(i=0; i<size; i++)
        cin >>arr1[i];

    cout <<"Enter "<<size <<" elements of Array2: " <<endl;
    for(i=0; i<size; i++)
        cin >>arr2[i];

    Swap_Array(arr1, arr2, size);

    cout <<endl <<"Array1" <<endl;
    for(i=0; i<size; i++)
        cout <<arr1[i] <<endl;

    cout <<endl <<"Array2" <<endl;
    for(i=0; i<size; i++)
        cout <<arr2[i] <<endl;
}
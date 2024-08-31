#include<iostream>
using namespace std;
void Merge_Array(int a1[], int a2[], int s)
{
    int i=0,j=0,k=0,mergeArray[2*s];
    while(k<2*s)
    {
        if(a1[i] <= a2[j])
        {
            mergeArray[k]=a1[i];
            k++;
            i++;
        }
        else
        {
            mergeArray[k]=a2[j];
            k++;
            j++;
        }
    }

    cout <<endl <<"Sorted Merge Array:"<<endl;
    for(i=0; i<2*s; i++)
        cout <<mergeArray[i] <<" ";
}


int main()
{
    int size;
    cout <<"Enter the size of array: ";
    cin >>size;

    int i,arr1[size],arr2[size];

    cout <<"Enter "<<size <<" sorted elements of Array1: "<<endl;
    for(i=0; i<size; i++)
        cin >>arr1[i];

    cout <<"Enter "<<size <<" sorted elements of Array2: "<<endl;
    for(i=0; i<size; i++)
        cin >>arr2[i];

    Merge_Array(arr1, arr2, size);
}
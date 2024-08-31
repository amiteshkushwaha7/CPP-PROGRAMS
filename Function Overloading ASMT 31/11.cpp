#include<iostream>
using namespace std;
void Merge_Array(int a1[],int s1, int a2[],int s2)
{
    int i=0,j=0,k=0,mergeArray[s1+s2];
    while(k<(s1+s2))
    {
        if(a1[i] <= a2[j])
        {
            mergeArray[k]=a1[i];
            k++;
            i++;

            if(i>=s1)
            {
                while (j<s2)
                {
                    mergeArray[k] = a2[j];
                    k++;
                    j++;
                }
                break;
            }
        }
        else
        {
            mergeArray[k]=a2[j];
            k++;
            j++;

            if(j>=s2)
            {
                while(i<s1)
                {
                    mergeArray[k]=a1[i];
                    k++;
                    i++;
                }
                break;
            }
        }
    }

    cout <<endl <<"Sorted Merge Array:"<<endl;
    for(i=0; i<(s1+s2); i++)
        cout <<mergeArray[i] <<" ";
}


int main()
{
    int size1,size2;
    cout <<"Enter the size of Array1: ";
    cin >>size1;
    cout <<"Enter the size of Array2: ";
    cin >>size2;

    int i,arr1[size2],arr2[size2];

    cout <<endl<<"Enter "<<size1 <<" sorted elements of Array1: "<<endl;
    for(i=0; i<size1; i++)
        cin >>arr1[i];

    cout <<endl<<"Enter "<<size2 <<" sorted elements of Array2: "<<endl;
    for(i=0; i<size2; i++)
        cin >>arr2[i];

    Merge_Array(arr1,size1, arr2,size2);
}
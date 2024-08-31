#include<iostream>
using namespace std;
void Sort_Array(int a[], int s, int n = 1)
{
    if(n==0)
    {
        int i,j,k,temp,max;
        for(i=0; i<s; i++)
        {
            max = a[i]; 
            temp = i;
            for(j=i+1; j<s; j++)
            {
                if(max < a[j])
                {
                    max = a[j];
                    temp = j;
                }

            }
            k=a[i];
            a[i]=max;
            a[temp]=k;
        }

        cout <<"Sorted Array in Dsending Order:" <<endl;
        for(i=0; i<s; i++)
            cout <<a[i] <<endl;
    }

    else
    {
        int i,j,k,temp,min;
        for(i=0; i<s; i++)
        {
            min = a[i];
            temp = i;
            for(j=i+1; j<s; j++)
            {
                if(min > a[j])
                {
                    min = a[j];
                    temp = j;
                }

            }
            k=a[i];
            a[i]=min;
            a[temp]=k;
        }

        cout <<"Sorted Array in Asending Order:" <<endl;
        for(i=0; i<s; i++)
            cout <<a[i] <<endl;
    }
    
}

int main()
{
    int size;
    cout <<"Enter Array Size: ";
    cin >>size;

    int i,arr[size];
    cout <<"Enter "<<size <<" Array's Numbers!"<<endl;
    for(i=0; i<size; i++)
        cin >>arr[i];

    int b;
    cout <<endl <<"Choose Array Sorting Type!"<<endl <<"1 for Asending Sorting"<<endl <<"0 for Desending Sorting" <<endl <<"For No Choice type 2"<<endl <<endl;
    cout <<"Enter Your Choice: ";
    cin >>b;

    if(b==1 || b==0)
        Sort_Array(arr, size, b);
    else
        Sort_Array(arr, size);
}
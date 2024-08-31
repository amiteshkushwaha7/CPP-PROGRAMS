#include<iostream>
using namespace std;
void rotateArray(int a[], int s, int d, int p)
{
    if(d==-1)
    {
        int i,j,k,l;
        for(i=0; i<p; i++)
        {
            l=a[0];
            for(j=0; j<s; j++)
            {
                if(j==(s-1))
                    a[j]=l;
                else
                    a[j]=a[j+1];
            }
        }
        cout <<"Roted Array: ";
        for(i=0; i<s; i++)
            cout <<a[i] <<" ";
    }
    else if(d==1)
    {
        int i,j,k,l;
        for(i=0; i<p; i++)
        {
            l=a[s-1];
            for(j=s-1; j>=0; j--)
            {
                if(j==0)
                    a[j]=l;
                else
                    a[j]=a[j-1];
            }
        }
        cout <<"Roted Array: ";
        for(i=0; i<s; i++)
            cout <<a[i] <<" ";
    }
}

int main()
{
    int size;
    cout <<"Enter the size of array: ";
    cin >>size;

    int i,dir,pos,arr[size];
    cout <<"Enter "<<size <<" Number: ";
    for(i=0; i<size; i++)
        cin >>arr[i];

    cout <<endl <<"Array Rotation Direction:"<<endl;
    cout <<"Type -1 for Left Rotation"<<endl;
    cout <<"Type 1 for Right Rotation"<<endl <<endl;

    cout <<"Enter Direction: ";
    cin >>dir;
    cout <<"Enter Rotation Position: ";
    cin >>pos;

    rotateArray(arr, size, dir, pos);
}
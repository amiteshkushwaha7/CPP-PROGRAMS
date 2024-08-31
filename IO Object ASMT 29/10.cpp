#include<iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size of Array! ";
    cin >>size;

    int i, arr[size], sum=0;
    cout <<"Enter Array Element!\n";
    for(i=0; i<size; i++)
        cin >>arr[i];

    for(i=0; i<size; i++)
        sum = sum + arr[i];

    cout <<"Sum of Array Elements = "<<sum;
}
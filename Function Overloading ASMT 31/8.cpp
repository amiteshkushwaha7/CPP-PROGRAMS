#include<iostream>
using namespace std;
void substring(char s[100], int inc, int exc=100)
{
    while(inc<exc)
    {
        cout <<s[inc];
        inc++;
    }
}

int main()
{
    char str[100] = {0};
    cout <<"Enter String: "<<endl;
    cin.getline(str, 100);
    
    substring(str, 4);
}
#include<iostream>
#include<cstring>
using namespace std;
void Sort_String(char s[][100],int r, int n=1)
{
    if(n==0)
    {
        int i,j,temp,result;
        char max[100]={0}, k[100]={0};
        for(i=0; i<r; i++)
        {
            strcpy(max, s[i]);
            temp = i;
            for(j=i+1; j<r; j++)
            {
                result = strcmp(max, s[j]);
                if(result == -1)
                {
                    strcpy(max, s[j]);
                    temp =j;
                }

            }
            strcpy(k, s[i]);
            strcpy(s[i], max);
            strcpy(s[temp], k);
        }

        cout <<"Sorted Array in Dsending Order:" <<endl;
        for(i=0; i<r; i++)
            cout <<s[i] <<endl;
    }

    else
    {
        int i,j,temp,result;
        char min[100]={0}, k[100]={0};
        for(i=0; i<r; i++)
        {
            strcpy(min, s[i]);
            temp = i;
            for(j=i+1; j<r; j++)
            {
                result = strcmp(min, s[j]);
                if(result == 1)
                {
                    strcpy(min, s[j]);
                    temp =j;
                }

            }
            strcpy(k, s[i]);
            strcpy(s[i], min);
            strcpy(s[temp], k);
        }

        cout <<"Sorted Array in Asending Order:" <<endl;
        for(i=0; i<r; i++)
        cout <<s[i] <<endl;
    }
}

int main()
{
    int i,row;
    cout <<"Enter total rows of string array: ";
    cin >>row;

    char str[row][100] = {0};
    cout <<"Enter String:"<<endl;

    cin.ignore();

    for(i=0; i<row; i++)
        cin.getline(str[i],100);

    int b;
    cout <<endl <<"Choose String Sorting Type!"<<endl <<"Type 1 for Asending Sorting"<<endl <<"Type 0 for Desending Sorting" <<endl <<"For Nochoice type 2"<<endl <<endl;
    cout <<"Enter Your Choice: ";
    cin >>b;

    if(b==0 || b==1)
        Sort_String(str, row, b);
    else
        Sort_String(str,row);
}
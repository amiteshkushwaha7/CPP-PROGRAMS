#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void writing()
{
    ofstream fout;
    fout.open("Program2.txt", ios::out);

    char str[100] = {'\0'};
    cout<<"Enter String: "<<endl;
    cin.getline(str, 100);
    fout<<str;

    fout.close();
}

string readingWordtoFile(char ch[100])
{
    ifstream fin;
    char str;
    fin.open("Program2.txt", ios::in);
     
    if(!fin)
        cout<<"File not found!";
    else
    {
        int i=0;
        str = fin.get();
         
        while(!fin.eof())
        {
            if(str==ch[i])
            {
                while(str==ch[i] && ch[i]!='\0')
                {
                    str = fin.get();
                    i++;
                }

                if((str==' ' || fin.eof()) && ch[i]=='\0')
                    return "Word found!";
            }
            else
            {
                while(str!=' ' && !fin.eof())
                {str = fin.get();}

                if(fin.eof())
                    return "Word not found!";
            }
            str = fin.get();
            i=0;
        }
    }

    fin.close();
}

int main()
{
    writing();

    char ch[100] = {'\0'};
    cout<<"Enter a Word: ";
    cin.getline(ch, 100);

    cout<<readingWordtoFile(ch);

    return 0;   
}
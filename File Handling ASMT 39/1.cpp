#include<iostream>
#include<fstream>
using namespace std;

//Method to write in file
void writing()
{
    ofstream fout;
    fout.open("Program1.txt", ios::out);  //Open file

    string str;
    cout<<"Enter String:";
    getline(cin, str);

    fout<<str; //writing string in file(Program2)
    fout.close();
}

//Method to copy files
void CopyFile()
{
    ofstream fout;
    ifstream fin;

    fin.open("Program1.txt", ios::in); //Open file Program2
    char ch = fin.get();
    if(!fin)
        cout<<"Warning: File not found!";
    else
    {
        fout.open("CopyProgram1.txt", ios::out); //Open CopyProgram2 file
        while (!fin.eof())
        {
            fout<<ch; //Copy file(Program2) to CopyProgram2
            ch = fin.get();
        }

        fout.close();
    }
     
    fin.close();
}

//Method to read data from file and display on screen
void reading()
{
    ifstream fin;
    fin.open("CopyProgram1.txt", ios::in);  //open file

    if(!fin)
        cout<<"File not found!";
    else
    {
        cout<<endl <<"Copied Content: ";
        char ch = fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch = fin.get();
        }
    }

    fin.close();
}

int main()
{
    writing();
    CopyFile();
    reading();

    return 0;
}
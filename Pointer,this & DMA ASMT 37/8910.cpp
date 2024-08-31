#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
        char *p;  //instance member pointer
        int lenght;  //instance member variable

    public:
        // instance member function to create dynamic array to store string
        String* createStringArray(string s)
        {
            this->lenght = s.length();

            p = new char[lenght+1];

            for(int i=0; i<=lenght; i++)
            {
                if(i==lenght)
                    p[i] = '\0';
                else
                    p[i] = s[i];
            }
            return this;
        } 

        int returnStringLength() {return lenght;}

        void printString()
        {
            for(int i=0; i<lenght; i++)
                cout<<p[i];

            cout<<endl;
        }

        String* convertStingUppercase()
        {
            for(int i=0; i<lenght; i++)
            {
                if(p[i]>='a' && p[i]<='z')
                    p[i] = p[i]-32;
            }

            return this;
        }

        String* convertStingLowercase()
        {
            for(int i=0; i<lenght; i++)
            {
                if(p[i] >= 'A' && p[i] <= 'Z')
                    p[i] = p[i]+32;
            }

            return this;
        }

        ~String(){delete []p;}
};

int main()
{
    String *ptr,str;
    string s;

    cout<<"Enter String: ";
    getline(cin, s);

    ptr = str.createStringArray(s);
    cout<<"Given String:"<<endl;
    ptr->printString();

    int i = ptr->returnStringLength();
    cout <<"String Length = " <<i <<endl <<endl;

    ptr = str.convertStingUppercase();
    cout<<"Uppecase of Given String:"<<endl;
    ptr->printString();
    cout <<endl;

    ptr = str.convertStingLowercase();
    cout<<"Lowercase of Given String:"<<endl;
    ptr->printString();

    free(ptr);

    return 0;
}
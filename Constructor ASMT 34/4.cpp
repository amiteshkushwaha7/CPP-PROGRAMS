#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        char bookTitle[50]={0};
        float bookPrize;
    
    public:
        Book(char t[], float y) 
        { 
            strcpy(bookTitle, t);
            bookPrize = y;
        }

        Book() 
        { 
            cout <<endl <<"Enter 2nd Book's Data:"<<endl;
            cin.ignore();
            cout <<"Title: ";
            cin.getline(bookTitle, 20);

            cout <<"Prize: ";
            cin >>bookPrize;
        }

        void getBookDetails()
        {
            cout <<endl <<"Book Details:"<<endl;
            cout <<"Title: "<<bookTitle <<endl <<"Prize: "<<bookPrize;
        }

};

int main()
{
    char title[20]={0};
    float prize;

    cout <<"Enter 1st Book's Data:"<<endl;
    cout <<"Title: ";
    cin.getline(title, 20);

    cout <<"Prize: ";
    cin >>prize;
 
    Book b1(title, prize);
    Book b2;

    b1.getBookDetails();
    cout <<endl;
    b2.getBookDetails();

    return 0;
}
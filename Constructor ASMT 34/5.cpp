#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, img;

    public:
        Complex(int x, int y) { real = x; img = y;}

        void showData() 
        {
            cout <<real;
            if(img<0)
                cout <<img <<"i";
            else  
                cout <<"+" <<img <<"i" <<endl;
        }

};

int main()
{
    int i,size,a,b;

    cout <<"Enter the size of CompleX array: ";
    cin >>size;
    Complex obj[size] = Complex(1,2); 

    cout <<endl;
    for(i=0; i<size; i++)
    {
        cout <<"Enter Complex Number" <<i+1 <<": ";
        cin >>a >>b;
        obj[i] = Complex(a,b);
    }

    cout <<endl;
    for(i=0; i<size; i++)
    {
        cout <<"Complex Number" <<i+1 <<": ";
        obj[i].showData();
    }
    
    return 0;
}
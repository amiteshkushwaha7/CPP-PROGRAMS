#include<iostream>
using namespace std;
class Numbers
{
    private:
        int size;
        int *p;
      
    public:
        //Default Constructor to initialize instance members!
        Numbers(int x)
        {
            size = x;
            p = (int*)malloc(sizeof(int)*x);
            for(int i=0; i<size; i++)
                p[i] = 0;
        }

        Numbers(Numbers &N)
        {
            size = N.size;
            p = (int*)malloc(sizeof(int)*size);
            for(int i=0; i<size; i++)
                p[i] = N.p[i];
        }


        void setNumberArray()
        {
            cout <<"Enter Array Elements: ";
            int i;
            for(i=0; i<size; i++)
                cin >>p[i];
        }

        void getNumberArray()
        {
            int i;
            for(i=0; i<size; i++)
                cout <<p[i] <<" ";
        }

        //Destructor to delocate point p memory!
        ~Numbers(){delete[]p;}
};

int main()
{
    int s;
    cout <<"Enter Array size: ";
    cin >>s;

    Numbers num(s);
    num.setNumberArray();
    cout <<endl <<"Given Array:"<<endl;
    num.getNumberArray();

    Numbers copyNum = num;
    cout <<endl <<"Copied Array:"<<endl;
    copyNum.getNumberArray();

    return 0;
}
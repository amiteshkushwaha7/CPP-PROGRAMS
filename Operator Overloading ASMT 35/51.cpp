#include<iostream>
using namespace std;
class Matrix
{
    private:
        int rows, coloums;
        int arrMatrix[3][3];

    public:
        Matrix(int x=0, int y=0) : rows(x), coloums(y) {}

        void inputMatrix()
        {
            int i,j;
            cout <<endl <<"Enter " <<rows*coloums  <<" Numbers of Matrix:"<<endl;
            for(i=0; i<rows; i++)
            {
                for(j=0; j<coloums; j++)
                    cin >>arrMatrix[i][j];
            }
        }

        Matrix operator+(Matrix A)
        {
            Matrix temp(rows, coloums);
            int i,j;
            for(i=0; i<rows; i++)
            {
                for(j=0; j<coloums; j++)
                    temp.arrMatrix[i][j] = arrMatrix[i][j] + A.arrMatrix[i][j];
            }
            return temp;
        }

        Matrix operator-(Matrix A)
        {
            Matrix temp(rows, coloums);
            int i,j;
            for(i=0; i<rows; i++)
            {
                for(j=0; j<coloums; j++)
                    temp.arrMatrix[i][j] = arrMatrix[i][j] - A.arrMatrix[i][j];
            }
            return temp;
        }

        Matrix operator*(Matrix A)
        {
            Matrix temp(rows, A.coloums);
            int i,j,k=0, mul=0;
            for(i=0; i<rows; i++)
            {
                while(k<coloums)
                {
                    for(j=0; j<coloums; j++)
                        mul = mul + arrMatrix[i][j] * A.arrMatrix[j][k];

                    temp.arrMatrix[i][k] = mul;
                    mul=0;
                    k++;
                }
                k=0;
            }
            return temp;
        }

        void displayMatrix()
        {
            int i,j;
            for(i=0; i<rows; i++)
            {
                for(j=0; j<coloums; j++)
                    cout <<arrMatrix[i][j] <<" ";

                cout <<endl;
            }
        }
};

int main()
{
    int a1,b1, a2,b2;
    cout <<"Enter Matrix1's Order: ";
    cin >>a1 >>b1;
    cout <<"Enter Matrix2's Order: ";
    cin >>a2 >>b2;

    Matrix Mx1(a1,b1), Mx2(a2,b2);
    Mx1.inputMatrix();
    Mx2.inputMatrix();

    if(a1==a2 && b1==b2)
    {
        Matrix addMx(a1,b1);
        addMx = Mx1.operator+(Mx2);
        cout <<endl <<"Sum:"<<endl;
        addMx.displayMatrix();
    }
    else 
        cout <<endl <<"Warnning: For Matrix Addition, both Matrix need to have same order!";

    
    if(a1==a2 && b1==b2)
    {
        Matrix subMx(a1,b1); 
        subMx = Mx1.operator-(Mx2);
        cout <<endl <<"Subtraciton:"<<endl;
        subMx.displayMatrix();
    }
    else 
        cout <<endl <<endl <<"Warnning: For Matrix Subtraction, both Matrix need to have same order!";


    if(b1==a2)
    {
        Matrix mulMx(a1,b2);
        mulMx = Mx1.operator*(Mx2);
        cout <<endl <<"Multiplication:"<<endl;
        mulMx.displayMatrix();
    }
    else
        cout <<endl <<endl <<"Warnning: Matricies Can't be Multiply. For Multiplication, Matrix1's Total Coloum must be equal to Matrix2's Total Row!";


    return 0;
}
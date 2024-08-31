#include <iostream>
using namespace std;
class Matrix
{
private:
    int arrMatrix[3][3];

public:
    void inputMatrix()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cin >> arrMatrix[i][j];
        }
    }

    void displayMatrix()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << arrMatrix[i][j] << " ";

            cout << endl;
        }
    }

    Matrix mulMatrix(Matrix A)
    {
        Matrix temp;
        int i, j, k = 0, mul = 0;
        for (i = 0; i < 3; i++)
        {
            while (k < 3)
            {
                for (j = 0; j < 3; j++)
                    mul = mul + arrMatrix[i][j] * A.arrMatrix[j][k];

                temp.arrMatrix[i][k] = mul;
                mul = 0;
                k++;
            }
            k = 0;
        }
        return temp;
    }

    Matrix addMatrix(Matrix A)
    {
        Matrix temp;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                temp.arrMatrix[i][j] = arrMatrix[i][j] + A.arrMatrix[i][j];
        }
        return temp;
    }

    Matrix subMatrix(Matrix A)
    {
        Matrix temp;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                temp.arrMatrix[i][j] = arrMatrix[i][j] - A.arrMatrix[i][j];
        }

        return temp;
    }

    void TransMatrix()
    {
        int i, j, k, temp;
        for (i = 0; i < 3; i++)
        {
            for (j = i; j < 3; j++)
            {
                if (i < j)
                {
                    temp = arrMatrix[i][j];
                    arrMatrix[i][j] = arrMatrix[j][i];
                    arrMatrix[j][i] = temp;
                }
            }
        }
    }

    int determinant()
    {
        int i, j=1, sum=0;
        for(i=0; i<3; i++)
        {
            if(i==0)
                sum = (arrMatrix[j][1] * arrMatrix[j*2][2]) - (arrMatrix[j][2] * arrMatrix[j*2][1]);
            else if(i==1)
                sum = (arrMatrix[j][0] * arrMatrix[j*2][2]) - (arrMatrix[j][2] * arrMatrix[j*2][0]);
            else
                sum = (arrMatrix[j][0] * arrMatrix[j*2][1]) - (arrMatrix[j][1] * arrMatrix[j*2][0]);
        }
        return sum;
    }    
};


int main()

{
    Matrix Mx1, Mx2;
    
    cout<<"Enter 9 value of Matrix1:"<<endl;
    Mx1.inputMatrix();
    cout<<"Enter 9 value of Matrix2"<<endl;
    Mx2.inputMatrix();

    Matrix addMx;
    addMx = Mx1.addMatrix(Mx2);
    cout << endl << "Sum:" << endl;
    addMx.displayMatrix();

    Matrix subMx;
    subMx = Mx1.subMatrix(Mx2);
    cout << endl << "Subtraciton:" << endl;
    subMx.displayMatrix();

    Matrix mulMx;
    mulMx = Mx1.mulMatrix(Mx2);
    cout << endl << "Multiplication:" << endl;
    mulMx.displayMatrix();

    int k;
    k = Mx1.determinant();
    if(k==0)
        cout<<endl<<"Matrix1 is singular"<<endl;
    else
        cout<<endl<<"Matrix1 is not singular"<<endl;

    k = Mx2.determinant();
    if(k==0)
        cout<<"Matrix2 is singular"<<endl;
    else
        cout<<"Matrix2 is not singular"<<endl;


    Mx1.TransMatrix();
    cout << endl << endl << "Transposed Matrix1:" << endl;
    Mx1.displayMatrix();

    Mx2.TransMatrix();
    cout << endl << endl << "Transposed Matrix2:" << endl;
    Mx2.displayMatrix();

    return 0;
}
#include <iostream>
using namespace std;
class Array
{
private:
    int size;
    int *p;

public:
    // constructor
    Array(int s)
    {
        size = s;
        p = (int *)malloc(sizeof(int) * size);
        int i;
        for (i = 0; i < size; i++)
            p[i] = 0;
    }

    // copy constructor
    Array(Array &A)
    {
        size = A.size;
        p = (int *)malloc(sizeof(int) * A.size);
        int i;
        for (i = 0; i < A.size; i++)
            p[i] = A.size;
    }

    void inputArray()
    {
        int i;
        for (i = 0; i < size; i++)
            cin >> p[i];
    }

    friend Array operator+(Array &A, Array &B);
     
    void displayArray()
    {
        int i;
        for (i = 0; i < size; i++)
            cout << p[i] << " ";
    }
 
    //distructor
    ~Array(){delete []p;}
};

Array operator+(Array &A, Array &B)
{
    Array temp(B.size + A.size);
    int i, j = 0, k = 0;
    for (i = 0; i < (B.size + A.size); i++)
    {
        if (i < A.size)
        {
            temp.p[j] = A.p[i];
            j++;
        }
        else
        {
            temp.p[j] = B.p[k];
            k++;
            j++;
        }
    }
    return temp;
}

int main()
{
    int s1, s2;
    cout << "Enter the size of array1: ";
    cin >> s1;
    cout << "Enter the size of array2: ";
    cin >> s2;

    Array arrObj1(s1);
    cout << endl<< "Enter " << s1 << " Numbers of Array1:" << endl;
    arrObj1.inputArray();

    Array arrObj2(s2);
    cout << "Enter " << s2 << " Numbers of Array2:" << endl;
    arrObj2.inputArray();

    cout << endl<< "Given Array1:" << endl;
    arrObj1.displayArray();

    cout << endl<< "Given Array2:" << endl;
    arrObj2.displayArray();

    Array a = arrObj1 + arrObj2;
    cout << endl<< endl<< "Array1 + Array2:" << endl;
    a.displayArray();

    return 0;
}
#include <iostream>
using namespace std;
class Time
{
private:
    Time *p;
    int size, H, M, S;

public:
    Time() : p(nullptr), H(0), M(0), S(0) {};

    Time* createTimeArray(int s)
    {
        size = s;
        p = new Time[size];

        int i;
        cout <<endl << "Enter " <<size << " Times:"<<endl;
        for (i=0; i <size; i++)
        {
            cout << "Enter Time" <<i+1 << "(hr,min,sec)" <<endl;
            cin >> p[i].H >> p[i].M >> p[i].S;

            if (p[i].S >= 60)
            {
                p[i].M = p[i].M + p[i].S / 60;
                p[i].S = p[i].S % 60;
            }

            if (p[i].M >= 60)
            {
                p[i].H = p[i].H + p[i].M / 60;
                p[i].M = p[i].M % 60;
            }

            if (p[i].H >= 12)
                p[i].H = p[i].H % 12;
        }

        return p;
    }

    Time* sortTimeArray()
    {
        int i,j,min,max,temp;
        Time oj;
        for(i=0; i<size; i++)
        {
            min = (p[i].H*360) + (p[i].M*60) + p[i].S;
            temp = i;

            for(j=i+1; j<size; j++)
            {
                max = (p[j].H*360) + (p[j].M*60) + p[j].S;
                if(min > max)
                {
                    min = max;
                    temp = j;
                }
            }
            
            oj = p[i];
            p[i] = p[temp];
            p[temp] = oj;
        }

        return p;
    }

    void showTimeArray(Time *Q) 
    { 
        cout<<endl;
        for (int i = 0; i <size; i++) 
        { cout << "Time" <<i+1 <<"-> " <<Q[i].H<<"hr " <<Q[i].M<<"min " <<Q[i].S<<"sec" <<endl;} 
    }

    ~Time() {delete []p;}
};

int main()
{
    Time obj;
    
    int s;

    cout << "Enter the size of Time Array: ";
    cin >> s;

    Time *ptr = obj.createTimeArray(s);
    ptr = obj.sortTimeArray();
    obj.showTimeArray(ptr);

    free(ptr);

    return 0;
}
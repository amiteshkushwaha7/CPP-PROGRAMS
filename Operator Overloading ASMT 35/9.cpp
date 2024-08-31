#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;

    public:
        Distance(int x, int y, int z) : km(x), m(y), cm(z) {}
         
        Distance operator++()
        {
            Distance temp(0,0,0);
            temp.km = km;
            temp.m = m;
            temp.cm = ++cm; 
            return temp;
        }

        Distance operator++(int)
        {
            Distance temp(0,0,0);
            temp.km = km;
            temp.m = m;
            temp.cm = ++cm; 
            return temp;
        }

        void getDistance()
        {
            if(cm >= 100){ m = m + cm/100; cm = cm%100;}
            
            if(m >= 1000){ km = km + m/1000; m = m%1000;}

            cout <<km <<"km " <<m <<"m " <<cm <<"cm"; 
        }
};

int main()
{
    int a,b,c;
    cout <<"Enter Distance in Km, M, Cm: "<<endl;
    cin >>a >>b >>c;

    Distance dst(a,b,c), preDst(0,0,0), postDst(0,0,0);
    cout <<endl <<"Given Distance: ";
    dst.getDistance();
    
    preDst = ++dst;  //preDst = dst.operator++();
    cout <<endl <<"++Distance: ";
    preDst.getDistance();

    postDst = preDst++;  //postDst = dst.operator++();
    cout <<endl <<"Distance++: ";
    postDst.getDistance();

    return 0;
}
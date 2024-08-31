#include<iostream>
using namespace std;
class Date
{
    private:
        int DD,MM,Yer;

    public:
        Date(int D, int M, int Y):DD(D), MM(M), Yer(Y){}

        void showDate() { cout <<endl <<"Date--> " <<DD <<"Day " <<MM <<"Month " <<Yer <<"Year";}
};

int main()
{
    int D,M,Y;

    cout <<"Enter Date!"<<endl;
    cout <<"Day: ";
    cin >>D;

    cout <<"Month: ";
    cin >>M;

    cout <<"Year: ";
    cin >>Y;

    if(D >= 31)
    {
        M = M + D/31;
        D = D%31;
    }
            
    if(M >= 12)
    {
        Y = Y + M/12;
        M = M%12;
    }

    Date obj(D,M,Y);
    obj.showDate();
}
// #include<iostream>
// using namespace std;
// class Date
// {
//     private:
//         int DD,MM,Yer;

//     public:
//         void setDate() :
//             (cout <<"Enter Date!"<<endl;
//             cout <<"Day: ";
//             cin >>DD),

//             (cout <<"Month: ";
//             cin >>MM),

//             (cout <<"Year: ";
//             cin >>Yer),

//             (if(DD >= 31)
//             {
//                 MM = MM + DD/31;
//                 DD = DD%31;
//             })
            
//             (if(MM >= 12)
//             {
//                 Yer = Yer + MM/12;
//                 MM = MM%12;
//             })
//         {}

//         void showDate() { cout <<endl <<"Date--> " <<DD <<"Day " <<MM <<"Month " <<Yer <<"Year";}
// };

// int main()
// {
//     Date obj;
//     obj.setDate();
//     obj.showDate();
// }
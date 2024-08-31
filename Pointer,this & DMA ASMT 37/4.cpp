#include<iostream>
using namespace std;
class Time
{
    private:
        int H,M,S;

    public:
        void setTime(int H, int M, int S)
        {
            this->H = H;
            this->M = M;
            this->S = S;

            if(this->S >= 60)
            {
                this->M = this->M + this->S/60;
                this->S = this->S%60;
            }
            
            if(this->M >= 60)
            {
                this->H = this->H + this->M/60;
                this->M = this->M%60;
            }
            
            if(this->H >= 12)
                this->H = this->H%12;
        }

        void showTime(){cout <<endl <<"Time--> " <<H <<"hr " <<M <<"min " <<S <<"sec";}

        void setSecond(int S) { this->S = S;}
        void setMinute(int M) { this->M = M;}
        void setHour(int H) { this->H = H;}

        int getHour(int H) { return H;}
        int getMinute(int M) { return M;}
        int getSecond(int H) { return S;}
};

int main()
{
    Time obj;
    int objHour, objMinute, objSecond;
    int HH, MM, Sec;

    cout <<"Enter Time!"<<endl;
    cout <<"Hour: ";
    cin >>HH;

    cout <<"Minute: ";
    cin >>MM;

    cout <<"Second: ";
    cin >>Sec;

    obj.setTime(HH, MM, Sec);
    obj.showTime();

    obj.setHour(HH);
    obj.setMinute(MM);
    obj.setSecond(Sec);
    
    objHour = obj.getHour(HH);
    cout <<endl <<endl <<"Hour: "<<objHour;

    objMinute = obj.getMinute(MM);
    cout <<endl <<"Minute: "<<objMinute;

    objSecond = obj.getSecond(Sec);
    cout <<endl <<"Second: "<<objSecond;

    return 0;
}
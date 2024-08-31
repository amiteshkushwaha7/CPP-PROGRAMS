#include<iostream>
#include<string.h>
using namespace std;
class Room
{
    private:
        int roomNum;
        char roomType[20]={0};
        bool is_AC;
        float roomPrize;
    
    public:
        Room(int x, char rt[], bool b, float y)
        {
            roomNum = x;
            strcpy(roomType, rt);
            is_AC = b;
            roomPrize = y;
        }

        void getRoomDetails()
        {
            cout <<endl <<"Room Details:"<<endl;
            cout <<"Room Number: "<<roomNum <<endl <<"Room Type: "<<roomType <<endl <<"Prize: " <<roomPrize <<endl;
            if(is_AC==1)
                cout <<"is_AC: True";
            else 
                cout <<"is_AC: False"; 
        }

};

int main()
{
    int Num;
    char Type[20]={0};
    bool AC;
    float Prize;

    cout <<"Enter Room's Details:"<<endl;
    cout <<"Number: ";
    cin >>Num;

    cin.ignore();
    cout <<"Type: ";
    cin.getline(Type, 20);

    cout <<"Prize: ";
    cin >>Prize;

    cout <<"AC(1=yes/0=no): ";
    cin >>AC;
    
    Room r(Num, Type, AC, Prize);

    r.getRoomDetails();

    return 0;
}
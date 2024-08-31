#include<iostream>
using namespace std;
class Game
{
    private:
        //Instance member array variable
        int Score[5];

    public:
        //Constructor to intialize Score Array
        Game()
        {
            for(int i=0; i<5; i++)
                Score[i]=0;
        }
 
        //Method used to set round wise score in Score Array
        void setScore(int round, int score)
        {Score[round] = score;}

        //Method used to display Score Array
        void getScore(int round)
        {cout<<Score[round];}

        //Distructor
        ~Game(){}
};

int main()
{
    Game game;
    int round,score;

    cout<<"Enter Roundwise Score: "<<endl;
    for(round=0; round<5; round++)  //Method used to used pass round and score to intialize Score Array
    {
        cout<<"Round "<<round+1 <<":";
        cin>>score;
        game.setScore(round+1, score);
    }

    cout<<endl;
    for(round=0; round<5; round++)   //Method used to pass round to display roundwise score
    {
        cout<<"Round "<<round+1 <<" Score = ";
        game.getScore(round+1);
        cout<<endl;
    }

    return 0;
}
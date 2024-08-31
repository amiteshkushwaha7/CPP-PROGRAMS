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

class GameResult:public Game
{
    private:
        //Instance member array variable
        int Result[5];

    public:
        //Constructor to intialize Result Array
        GameResult()
        {
            for(int i=0; i<5; i++)
                Result[i]=0;
        }

        //Method used to set round wise result in Result Array
        void setResult(int round, int result)
        {Result[round] = result;}

        //Method used to display Score Array
        void getResult(int round)
        {cout<<Result[round];}

        //Method to calculate final result of game
        int calculateFinalResult()
        {
            int i,result=0;
            for(i=0; i<5; i++)
            {result = result + Result[i];}

            return result;
        }

        //Constructor
        ~GameResult(){}
};

int main()
{
    GameResult game;
    int round,score;

    cout<<"Enter Roundwise Score: "<<endl;
    for(round=0; round<5; round++)  //Method used to used pass round and score to intialize Score Array
    {
        cout<<"Round "<<round+1 <<":";
        cin>>score;
        game.setScore(round+1, score);
    }

    cout<<endl <<"Enter Roundwise Result:"<<endl;
    cout<<"2 for win, 1 for loss and 0 for draw:"<<endl;
    for(round=0; round<5; round++)  //Method used to used pass round and result to intialize Result Array
    {
        cout<<"Round "<<round+1 <<":";
        cin>>score;
        game.setResult(round+1, score);
    }

    cout<<endl;
    for(round=0; round<5; round++)   //Method used to pass round to display roundwise score and result
    {
        cout<<"Round "<<round+1 <<" Score = ";
        game.getScore(round+1);
        cout<<endl <<"Round "<<round+1 <<" Result = ";
        game.getResult(round+1);
        cout<<endl <<endl;
    }

    cout<<endl <<"Final Result = "<<game.calculateFinalResult();

    return 0;
}
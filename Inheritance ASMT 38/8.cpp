#include<iostream>
using namespace std;
class Actor
{
    private:
        string name;
        int age;

    public:
        //Constructor to initialize name and age
        Actor():name("Unnammed"),age(0){}

        //Setter for name
        void setName(string name)
        {this->name = name;}

        //Setter for age
        void setAge(int age)
        {this->age = age;}

        //Getter for name
        void getName()
        {cout<<"Name: "<<name;}

        //Getter for age
        void getAge()
        {cout<<"Age: "<<age;}

        //Distructor
        ~Actor(){}
};

class TVActor:virtual public Actor
{
    private:
        int numofProject;

    public:
        //Constructor to initialize numofProjcet
        TVActor():numofProject(0){}

        //Setter for numofProject
        void setTVProject(int numofProject)
        {this->numofProject = numofProject;}

        //Getter for numofProject
        void getTVProject()
        {cout<<"Done or Running Project: "<<numofProject;}

        //Setter for TVActor
        void setTVActor(string str, int ag, int x)
        {
            setName(str);
            setAge(ag);
            setTVProject(x);
        }

        //Getter for TVActor
        void getTVActor()
        {
            getName();
            getAge();
            getTVProject();
        }

        //Distructor
        ~TVActor(){}
};

class MovieActor:virtual public Actor
{
    private:
        int numofMovie;

    public:
        //Constructor to initialize numofProjcet
        MovieActor():numofMovie(0){}

        //Setter for numofProject
        void setMovie(int numofMovie)
        {this->numofMovie = numofMovie;}

        //Getter for numofProject
        void getMovie()
        {cout<<"Done or Running Movie: "<<numofMovie;}

        //Setter for TVActor
        void setMoveieActor(string str, int ag, int y)
        {
            setName(str);
            setAge(ag);
            setMovie(y);
        }

        //Getter for TVActor
        void getMovieActor()
        {
            getName();
            getAge();
            getMovie();
        }

        //Distructor
        ~MovieActor(){}
};

class AllScreenActor:public TVActor, public MovieActor
{
    public:
        //Set all Detials of Actor
        void setActorData(string str, int ag, int x, int y)
        {
            setName(str);
            setAge(ag);
            setTVProject(x);
            setMovie(y);
        }

        //Display all details of Actor
        void getActorData()
        {
            cout<<endl;
            getName();
            cout<<endl;
            getAge();
            cout<<endl;
            getTVProject();
            cout<<endl;
            getMovie();
        }

    //Disctructor
    ~AllScreenActor(){}
};

int main()
{
    string Name;
    int Age,TVProject,Movie;
    cout<<"Enter these Actor Details";
    cout<<endl <<"Name: ";
    getline(cin, Name);

    cout<<"Age: ";
    cin>>Age;

    cout<<"TVProjects: ";
    cin>>TVProject;

    cout<<"Movies: ";
    cin>>Movie;
    
    AllScreenActor obj;
    obj.setActorData(Name, Age, TVProject, Movie);
    obj.getActorData();

    return 0;
}
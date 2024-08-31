#include<iostream>
using namespace std;
class TestResult 
{
    private:
        int rollNum, rightAns, wrongAns;
        float netScore;
        float rightWeightage, wrongWeightage;

    public:
        void setRollNum(int a) { rollNum = a;}
        void setRightAns(int b) {rightAns = b;}
        void setWrongAns(int c) { wrongAns = c;}

        void setRightWeightage(float d) { rightWeightage = d;}
        void setWrongWeightage(float e) { wrongWeightage = e;}

        void setNetScore(float x, float y) { netScore = (x*rightAns) - (y*wrongAns);}

        void sortArray(TestResult a[], int s)
        {
            TestResult obj;
            int i,j,temp;
            float max;

            for(i=0; i<s; i++)
            {
                max = a[i].netScore;
                temp = i;

                for(j=i+1; j<s; j++)
                {
                    if(max < a[j].netScore)
                    {
                        max = a[j].netScore;
                        temp = j;
                    }
                }
                
                obj = a[i];
                a[i] = a[temp];
                a[temp] = obj;
            }
        }

        void display()
        {
            //cout <<rollNum <<" " <<rightAns <<" " <<wrongAns <<" " <<rightWeightage <<" " <<wrongWeightage <<" " <<netScore <<endl <<endl;
            cout <<"Roll Number-> "<<rollNum <<endl <<"Right Answer-> " <<rightAns <<endl <<"Wrong Answer-> " <<wrongAns <<endl;
            cout <<"Right Weightage-> " <<rightWeightage <<endl <<"Wrong Weightage-> " <<wrongWeightage <<endl <<"Net Score-> " <<netScore <<endl <<endl;
        }
        

};
// float TestResult::rightWeightage;
// float TestResult::wrongWeightage;

int main()
{
    int size;
    cout <<"Enter the size of TestResult Array: ";
    cin >>size;

    TestResult arr[size];
    
    int i,roll_num, right_ans, wrong_ans;
    float right_weightage, wrong_weightage;

    for(i=0; i<size; i++)
    {
        cout <<"Enter Object"<<i+1 <<" data:";
        cout <<endl <<"Roll Number: ";
        cin >>roll_num;

        cout <<"Right Answer: ";
        cin >>right_ans;

        cout <<"Wrong Answer: ";
        cin >>wrong_ans;

        cout <<"Right Weightage: ";
        cin >>right_weightage;

        cout <<"Wrong Weightage: ";
        cin >>wrong_weightage;

        arr[i].setRollNum(roll_num);
        arr[i].setRightAns(right_ans);
        arr[i].setWrongAns(wrong_ans);
        arr[i].setRightWeightage(right_weightage);
        arr[i].setWrongWeightage(wrong_weightage);
        arr[i].setNetScore(right_weightage, wrong_weightage);

        cout <<endl;
    }

    arr[size].sortArray(arr, size);
    
    cout <<"Sorted(by net score) Object Array:"<<endl;
    for(i=0; i<size; i++)
    {
        cout <<"Object" <<i+1 <<" details-->"<<endl;
        arr[i].display();
    }
}

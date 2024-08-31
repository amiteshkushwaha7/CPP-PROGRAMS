#include<iostream>
using namespace std;
class TestResult
{
    private:
        int rollNum, rightAns, wrongAns;
        float netScore;
        static float rightWeightage, wrongWeightage;

    public:
        void setRollNum(int a) { rollNum = a;}

        void setRightAns(int b) { rightAns = b;}

        void setWrongAns(int c) { wrongAns = c;}

        void setNetScore(int d) { netScore = d;}

        static void setRightWeightage(float e) { rightWeightage = e;}

        static void setWrongWeightage(float f) { wrongWeightage = f;}

        void setNetScore(float x, float y) 
        { 
            netScore = (x*rightAns) - (y*wrongAns);
            cout <<endl <<"Net Score = "<<netScore;
        }
};
float TestResult::rightWeightage;
float TestResult::wrongWeightage;

int main()
{
    TestResult obj;
    int roll_num, right_ans, wrong_ans;
    float net_score, right_weightage, wrong_weightage;

    cout <<"Enter these data:"<<endl;
    cout <<"Roll Number: ";
    cin >>roll_num;

    cout <<"Right Answer: ";
    cin >>right_ans;

    cout <<"Wrong Answer: ";
    cin >>wrong_ans;

    cout <<"Right Weightage: ";
    cin >>right_weightage;

    cout <<"Wrong Weightage: ";
    cin >>wrong_weightage;
    

    obj.setRollNum(roll_num);
    obj.setRightAns(right_ans);
    obj.setWrongAns(wrong_ans);
    TestResult::setRightWeightage(right_weightage);
    TestResult::setWrongWeightage(wrong_weightage);

    obj.setNetScore(right_weightage, wrong_weightage);
}
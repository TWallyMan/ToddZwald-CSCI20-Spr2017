#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class TestGrade{
    private:
        double score_;
        int mistake_;
    
    public:
        void StudentTestComparison(string answerKey[], int correctIncorrect[], string studentAnswer[],  int i, int j, int k, double score){
            
            for(i = 0; i < 21; i++){
                j = i + 2;
                
                if(answerKey[i] == studentAnswer[j]){
                    score = score + 1;
                }
                else if(answerKey[i] != studentAnswer[j]){
                    if(studentAnswer[j] == "\?"){
                        score = score;
                        correctIncorrect[k] = i;
                        k++;
                    }
                    else{
                        score = score - 0.25;
                        correctIncorrect[k] = i;
                        k++;
                    }
                }
            }
            score_ = score;
            mistake_ = k;
        }
        int GetScore(){
            int score = score_;
            return score;
        }
        int GetWrongAnswers(){
            int mistake = mistake_;
            return mistake;
        }
};

int main(){
    ifstream inFS1;
    ifstream inFS2;
    ofstream outFS;
    
    string answerKey[21];
    string studentAnswer[23];
    int correctIncorrect[21];
    int students = 7;
    int score;
    int i = 0;
    int j;
    int k;
    
    TestGrade finalGrade;
    
    cout << "Your test answers are being loaded up" << endl << endl;
    //Loads students answers
    inFS1.open("testanswers.txt");
    if(!inFS1.is_open()){
        cout << "Missing studentanswer.txt file" << endl;
        return 1;
    }
    
    cout << "Comparing student answers to test answers" << endl << endl;
    //Loads test answers
    inFS2.open("studentanswers.txt");
    if(!inFS2.is_open()){
        cout << "Missing testanswers.txt file for test answer sheet" << endl;
        return 1;
    }
    
    cout << "Recording answers to grade book" << endl << endl;
    
    outFS.open("grade.txt");
    if(!outFS.is_open()){
        cout << "Missing grade.txt file" << endl;
        return 1;
    }
    
    for(int i = 0; i < students;  i++){
        //cout << "WHAT" << endl;
        for(int j = 0; j < 21; j++){
            inFS1 >> answerKey[j];
        }
        //cout << "What" << endl;
        for(int k = 0; k < 23; k++){
            inFS2 >> studentAnswer[k];
        }
        //cout << "Baggels" << endl;
        
        finalGrade.StudentTestComparison(answerKey, correctIncorrect, studentAnswer,  i, j, k, score);
        
        //cout << "Baggels" << endl;
        
        outFS << "Student Name: " << studentAnswer[0] << " " << studentAnswer[1] << endl;
        outFS << endl;
        for(int l = 0; l < finalGrade.GetWrongAnswers(); l++){
            outFS << "# " << correctIncorrect[l] << " is wrong" << endl;
        }
        outFS << endl << "Your score out of 21 is: " << finalGrade.GetScore() << endl << endl;
    }
    
    cout << endl << "Scoring and recording is done" << endl;
    
    inFS1.close();
    inFS2.close();
    outFS.close();
}
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Class for calculating grade

class finalGrade {
    public: 
    
        void answerChecker(string answerkey[21], int incorrect[21], string studentAnswers[23],  int i, int j, int k, double score){
            
        // This program takes in the first and last name of a user before it starts comparing grades from the two files so it does not impact final score
        
         for (i = 0; i < 21; i++) {
                j = i + 2; 
        
        //if statement that adds 1 to score if the student is correct
    
        if (answerkey[i] == studentAnswers[j]) 
                score = score + 1.0; 
                
        // if statement for incorrect answers
        else if (answerkey[i] != studentAnswers[j]) { 
        
            // If student omits a question 1 point is taken off
            
            if (studentAnswers[j] == "\?") { 
                score = score;
                incorrect[k] = i; 
                k++;
            }
            
            // If answer is incorrect .25 points are deducted
            
            else {  
                score = score - 0.25;
                
                //stores incorrect question number
                incorrect[k] = i; 
                k++;
            }
        }
    }
    
    
    totalScore = score; 
    NumOfMistake = k;  
}
        // keeps the total score of student
        
        
        //keeps track of the number of answers wrong
        
        int GetnumWrong() const {
        return NumOfMistake;
        } 
        
        
        double GetScore() const {
        return totalScore;
        } 
        
        
        
        
    private:
    
        double totalScore = 0.0; 
        int NumOfMistake = 0; 
};

// class functions

int main() {
    
    //initializing file input and output
    ifstream fin; 
    ifstream fin1; 
    ofstream fout; 
    
    //intitializing variables and arrays.
    string answerkey[21]; 
    string studentAnswers[23];
    double score = 0; 
    int incorrect[21];
    int student = 6;
    
    //variables for arrays 
    int i = 0; 
    int j = 0; 
    int l = 0;
    int k = 0; 
    
    //initializes class
    finalGrade grade; 
    
    cout << "Loading submitted answers" << endl;
    
    // this opens the two text files for comparison
    fin.open("answers.txt");
    
    //if the file is not present the application will close with warning message.
    if (!fin.is_open()) { 
        cout << endl;
        cout << "Missing file: 'answers.txt...'" << endl;
        return 1;
    }
    cout << endl;
    cout << "reading answers" << endl;
    
    fin1.open("studentAnswers.txt");
    
    //if the file is not present the application will close
    if (!fin1.is_open()) { 
        cout << endl;
        cout << "Missing file: 'studentAnswer.txt...'" << endl;
        return 1;
    }
    cout << endl;
    cout << "Recording answers in the grade book." << endl;
    
    //opens file to tell student their final grade
    fout.open("grade.txt");
    if (!fout.is_open()) {
      cout << endl;
      cout << "Missing file: 'studentResult.txt...'" << endl;
      return 1;
    }
    
    cout << endl;
    
    
    for (l = 0; l < student; l++){
        
    //reads answer key data    
    for (i = 0; i < 18; i++) {
        fin >> answerkey[i];
    }
    
    // takes the input from student answers to be analyzed
    for (i = 0; i < 20; i++) {
        fin1 >> studentAnswers[i];
    }
    
    
    // this class compares the array and determines score
    grade.answerChecker(answerkey, incorrect, studentAnswers,  i, j, k, score);
    
    fout << endl;
    fout << "Student Name: " << studentAnswers[0] << " " << studentAnswers[1] << endl; 
    fout << endl;
    
    // for loop for showing question number of which answers were incorrect
    for (i = 0; i < grade.GetnumWrong(); i++) {
        fout << "You got #" << incorrect[i] + 1 << " incorrect. (-1.25)" << endl; 
    }
        //Tells the user their total score
        fout << endl;
        fout << "Total Score out of 21: " << grade.GetScore() << endl; 
        fout << endl;
    }
    //closes out of the program
    cout << endl;
    cout << "Logging out." << endl;
    fin.close();
    fin1.close();
    fout.close();
    
    return 0;
}
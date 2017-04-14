#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;


int dieWhenRolled() {
    int dieNumber;
    dieNumber = ((rand() % 6) + 1); // Equation for random number generator
    return dieNumber;
};

class Score{
    private:
        int score_;
    public:
        Score(){
            score_ = 0;
        }
        void SetScore(int dieVal){
            score_ = score_ + dieVal;
        }
        int GetScore(){
            int points = score_;
            return points;
        }
};


int main(){
    
    Score aI;
    Score user;
    
    srand(time(0)); // Uses time as its referance
    int dieValue = ((rand() % 6) + 1); // Stores the random number for use
    int dieNumber = dieWhenRolled();
    
    int userInitialPoints;
    int aIInitialPoints;
    int playerPoints;
    
    char startOfGame;
    char playerChoice;
    
    cout << "Would you like to play a game calle Pig? (y or n)" << endl;
    cin >> startOfGame;
    cout << endl;
    
    switch(startOfGame){
        case 'Y':
        case 'y':
            cout << "Ok, lets get started!!" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Well fine then, I didn't want to play anyways" << endl;
            break;
    }
    
    cout << endl << "You start with the first roll." << endl;
    
    if(dieValue != 1){
        cout << "You rolled a " << dieValue << " so you get " << 
                dieValue << " points" << endl << endl;
                user.SetScore(dieValue);
                cout << "Your current points are " << user.GetScore() << endl;
        
        cout << "What would you like to do next?" << endl;
        cout << "Press R for roll, S to stay with current point" << endl;
        cin >> playerChoice;
        cout << endl;
    
    }
    else if(playerChoice == 's' || playerChoice == 'S'){
        cout << "Ok, your total points are " << user.GetScore() << endl;
        dieNumber = dieWhenRolled();
        for(int timesRolledDice = 0; timesRolledDice < 3; timesRolledDice++){
            if(dieNumber != 1){
                cout << "I rolled a " << dieNumber << endl;
                aI.SetScore(dieNumber);
                cout << "My current points are " << aI.GetScore() << endl;
                dieNumber = dieWhenRolled();
            }
            else{
                cout << "I rolled a 1 so I earn no points and is now your turn" << endl;
                timesRolledDice = 3;
            }
        }
    }
    else{
        cout << "Sorry, you rolled a 1 so you earned no points and it's now my turn." << endl;
        for(int timesRolledDice = 0; timesRolledDice < 3; timesRolledDice++){
            if(dieNumber != 1){
                cout << "I rolled a " << dieNumber << endl;
                aI.SetScore(dieNumber);
                cout << "My current points are " << aI.GetScore() << endl;
                dieNumber = dieWhenRolled();
            }
            else{
                cout << "I rolled a 1 so I earn no points and is now your turn" << endl;
                timesRolledDice = 3;
            }
        }
        cout << "Roll your die to start your turn (press r): ";
        cin >> playerChoice;
        cout << endl;
    }
    
    while(user.GetScore() <= 100 && aI.GetScore() <= 100){
        
        switch(playerChoice){
            case 'R':
            case 'r':
                dieNumber;
                cout << "You rolled a " << dieNumber << endl;
                break;
            case 'S':
            case 's':
                cout << "Your total points are " << user.GetScore() << endl;
                userInitialPoints = user.GetScore();
        }
        
        if(dieNumber != 1){
            user.SetScore(dieNumber);
            cout << "You get " << user.GetScore() << " points" << endl;
            cout << "Your total points so far are: " << user.GetScore() << endl;
            dieNumber = dieWhenRolled();
        }
        else if(playerChoice == 's' || playerChoice == 'S'){
            cout << "Ok, your total points are " << user.GetScore() << endl;
            dieNumber = dieWhenRolled();
            for(int timesRolledDice = 0; timesRolledDice < 3; timesRolledDice++){
                if(dieNumber != 1){
                    cout << "I rolled a " << dieNumber << endl;
                    aI.SetScore(dieNumber);
                    cout << "My current points are " << aI.GetScore() << endl;
                    dieNumber = dieWhenRolled();
                }
                else{
                    cout << "I rolled a 1 so I earn no points and is now your turn" << endl;
                    timesRolledDice = 3;
                }
            }
        }
        else{
            
            cout << "Sorry, you earned no points and it's now my turn." << endl;
            playerPoints = userInitialPoints + 0;
            
            dieNumber = dieWhenRolled();
            for(int timesRolledDice = 0; timesRolledDice < 3; timesRolledDice++){
                if(dieNumber != 1){
                    cout << "I rolled a " << dieNumber << endl;
                    aI.SetScore(dieNumber);
                    cout << "My current points are " << aI.GetScore() << endl;
                    dieNumber = dieWhenRolled();
                }
                else{
                    cout << "I rolled a 1 so I earn no points and is now your turn" << endl;
                    timesRolledDice = 3;
                }
            }
            
        }
        
        cout << "What would you like to do next?" << endl;
        cout << "Press R for roll or S to stay with current point" << endl;
        cin >> playerChoice;
        cout << endl;
    }
    if(user.GetScore() >= 100){
        cout << "You win!!!!!" << endl;
    }
    else{
        cout << "You lose, try again next time" << endl;
    }
    
    return 0;
}
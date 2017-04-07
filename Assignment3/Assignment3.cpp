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

    
    
class PlayerDiceRoll{
    
    private:
        int dice_;
        
    public:
        void SetDiceRoll(int userDiceRoll){
            dice_ = dieWhenRolled();
            return;
        }
        int GetDiceRoll(){
            int dieValue = dice_;
            return dieValue;
        }
    
    
};


int main(){
    
    PlayerDiceRoll UserPlaying;
    
    srand(time(0)); // Uses time as its referance
    int dieValue = ((rand() % 6) + 1); // Stores the random number for use
    int playerPoints;
    int playerInitialPoints = 0;
    int dieNumber = dieWhenRolled();
    int compPoints;
    int compInitialPoints = 0;
    
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
        playerPoints = dieValue;
        
        cout << "What would you like to do next?" << endl;
        cout << "Press R for roll, S to stay with current point" << endl;
        cin >> playerChoice;
        cout << endl;
    
    }
    else{
        
        cout << "Sorry, you earned no points and it's now my turn." << endl;
        playerPoints = 0;
    }
    
    
    
    while(playerPoints <= 100 && compPoints <= 100){
        
        switch(playerChoice){
            case 'R':
            case 'r':
                UserPlaying.SetDiceRoll(dieWhenRolled());
                cout << "You rolled a " << UserPlaying.GetDiceRoll() << endl;
                break;
            case 'S':
            case 's':
                cout << "Your total points are " << playerPoints << endl;
                playerInitialPoints = playerPoints;
        }
        
        if(UserPlaying.GetDiceRoll() != 1){
            cout << "You get " << UserPlaying.GetDiceRoll() << " points" << endl;
            playerPoints = playerPoints + UserPlaying.GetDiceRoll();
            cout << "Your total points so far are: " << playerPoints << endl;
        }
        else if()
        else{
            
            cout << "Sorry, you earned no points and it's now my turn." << endl;
            playerPoints = playerInitialPoints + 0;
        }
        
        cout << "What would you like to do next?" << endl;
        cout << "Press R for roll or S to stay with current point" << endl;
        cin >> playerChoice;
        cout << endl;
    }
    
}

/*cout << "I rolled a " << dieWhenRolled() << endl;
if(dieValue != 1){
    cout << 
}
*/
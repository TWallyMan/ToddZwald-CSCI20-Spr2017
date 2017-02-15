// Todd Zwald
// 2/15/17
/*
This program is for the user to be able to create their own monsters by using
the names that are given, and then giving out the final product as a list 
comprised of the parts used or stated as none if a part was not used.
*/

#include <iostream>
#include <string>
using namespace std;

// main strust for using specifc parts at specific places when called
struct MonsterData {
    
    string monsterName;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
    
};

int main () {
    
    MonsterData MonsterOne;

//MonsterOne data collection from user
    cout << "Name your monster: ";
    cin  >> MonsterOne.monsterName;
    cout << "Monster's head: "  << endl << "Zombus, Franken or Happy?" << endl;
    cin  >> MonsterOne.monsterHead;
    cout << "Monster's eyes: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monsterEyes;
    cout << "Monster's ears: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monsterEars;
    cout << "Monster's nose: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monsterNose;
    cout << "Monster's mouth: " << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterOne.monsterMouth;
    cout << endl;
    
//output for MonsterOne parts
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterOne.monsterName << ": " << MonsterOne.monsterHead << ", " << MonsterOne.monsterEyes << ", " << MonsterOne.monsterEars << ", " << MonsterOne.monsterNose << ", " << MonsterOne.monsterMouth << "." << endl;
    cout << endl;
    cout << endl;
    
    MonsterData MonsterTwo;

//MonsterTwo data collection from user
    cout << "Name your second monster: ";
    cin  >> MonsterTwo.monsterName;
    cout << "Monster's head: "  << endl << "Zombus,  Franken or Happy?" << endl;
    cin  >> MonsterTwo.monsterHead;
    cout << "Monster's eyes: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monsterEyes;
    cout << "Monster's ears: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monsterEars;
    cout << "Monster's nose: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monsterNose;
    cout << "Monster's mouth: " << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterTwo.monsterMouth;
    cout << endl;
    
//output for MonsterTwo parts
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterTwo.monsterName << ": " << MonsterTwo.monsterHead << ", " << MonsterTwo.monsterEyes << ", " << MonsterTwo.monsterEars << ", " << MonsterTwo.monsterNose << ", " << MonsterTwo.monsterMouth << "." << endl;
    cout << endl;
    cout << endl;
    
    MonsterData MonsterThree;

//MonsterThree data collection from user
    cout << "Name your third monster: ";
    cin  >> MonsterThree.monsterName;
    cout << "Monster's head: "  << endl << "Zombus,  Franken or Happy?" << endl;
    cin  >> MonsterThree.monsterHead;
    cout << "Monster's eyes: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monsterEyes;
    cout << "Monster's ears: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monsterEars;
    cout << "Monster's nose: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monsterNose;
    cout << "Monster's mouth: " << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterThree.monsterMouth;
    cout << endl;
    
//output for MonsterThree parts
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterThree.monsterName << ": " << MonsterThree.monsterHead << ", " << MonsterThree.monsterEyes << ", " << MonsterThree.monsterEars << ", " << MonsterThree.monsterNose << ", " << MonsterThree.monsterMouth << "." << endl;
    cout << endl;
    cout << endl;
    
    MonsterData MonsterFour;

//MonsterFour data collection from user
    cout << "Name your fourth monster: ";
    cin  >> MonsterFour.monsterName;
    cout << "Monster's head: "  << endl << "Zombus,  Franken or Happy?" << endl;
    cin  >> MonsterFour.monsterHead;
    cout << "Monster's eyes: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monsterEyes;
    cout << "Monster's ears: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monsterEars;
    cout << "Monster's nose: "  << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monsterNose;
    cout << "Monster's mouth: " << endl << "Spritem, Vegitas, Wackus, or None?" << endl;
    cin  >> MonsterFour.monsterMouth;
    cout << endl;
    
//output for MonsterFour parts
    cout << "This monster is finshed.  It's details are: " << endl;
    cout << MonsterFour.monsterName << ": " << MonsterFour.monsterHead << ", " << MonsterFour.monsterEyes << ", " << MonsterFour.monsterEars << ", " << MonsterFour.monsterNose << ", " << MonsterFour.monsterMouth << "." << endl;
    cout << endl;
    cout << endl;
    
//All monster data released at once in a list of what part was used for what monster
    cout << "Together your Monsters are: " << endl;
    cout << MonsterOne.monsterName << ": " << MonsterOne.monsterHead << ", " << MonsterOne.monsterEyes << ", " << MonsterOne.monsterEars << ", " << MonsterOne.monsterNose << ", " << MonsterOne.monsterMouth << "." << endl;
    cout << MonsterTwo.monsterName << ": " << MonsterTwo.monsterHead << ", " << MonsterTwo.monsterEyes << ", " << MonsterTwo.monsterEars << ", " << MonsterTwo.monsterNose << ", " << MonsterTwo.monsterMouth << "." << endl;
    cout << MonsterThree.monsterName << ": " << MonsterThree.monsterHead << ", " << MonsterThree.monsterEyes << ", " << MonsterThree.monsterEars << ", " << MonsterThree.monsterNose << ", " << MonsterThree.monsterMouth << "." << endl;
    cout << MonsterFour.monsterName << ": " << MonsterFour.monsterHead << ", " << MonsterFour.monsterEyes << ", " << MonsterFour.monsterEars << ", " << MonsterFour.monsterNose << ", " << MonsterFour.monsterMouth << "." << endl;
    
    
    return 0;
}
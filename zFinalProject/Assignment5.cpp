//Name: Todd Zwald && Juan Lemus
//Date: 5/16/17
/*Lab Description:
   This program is a basic text based dungeon crawler. It uses a header file for
   classes and it has multiple text files for equipment, races, classes and storiese
   This allows the user to pick their race and class, gives them a story based on
   their decisions and gives them select skill points. It then askes them a few basic
   questions that will lead to how the game goes.
*/
#include <iostream>
#include <fstream>
#include <string>
#include "mainClass.h"


//either works

/*using std :: cin;
using std :: cout;
using std :: ifstream;
using std :: ostream;
using std :: string;
using std :: endl; 
*/
using namespace std;

int main(){
 
 const int ARRAY_SIZE = 13;
 
 Race UserRace;
 Class UserClass;
 SkillPoints UserSkill;
 
 string races;
 string classes;
 
 string selectRace;
 string selectClass;
 string userChar; // basic choice input variable
 
 int strength;
 int constitution;
 int dexterity;
 int charisma;
 int inteligence;
 int wisdom;
 
 string fileStory;
 
 string marketOrQuest;
 
 /*Input stream for 5 txt files 
 one output file for 'Final Character txt file.*/
 
 //Character files for selection
 ifstream fin; //Race
 ifstream fin1; // Class
 
 // Set skill points to be alloted based on class
 ifstream fin2; //Skill points
 
 // Equipment list for people to choose from before start of journey
 ifstream fin3; //Equipment
 string equipment;
 int quantity;
 
 string equipName[ARRAY_SIZE];
 int equipQuantity[ARRAY_SIZE];
 string displayArray[6];
 
 
 //Story for each race
 ifstream fin4; //Dwarf Story
 ifstream fin5; //Human Story
 ifstream fin6; //Elf Story
 
 ifstream fin7; //Quest story
 
 //Final character document
 ofstream fout;
 
 fout.open("FinalCharacter.txt");
 
 cout << "Choose from the three races: ";
 //cin >> userChar;
 
 fin.open("Race.txt");
 
 if(!fin.is_open()){
  cout << "No file found" << endl;
  return 1;
 }
 
 getline(fin, races);
 
 cout << races << endl << endl;
 cin >> selectRace;
 cout << endl;
 
 while( selectRace != "Human" && selectRace != "Dwarf" && selectRace != "Elf" &&  selectRace != "human" && selectRace != "dwarf" && selectRace != "elf"){
  
  if(selectRace == "Human" || selectRace == "human"){
   fin5.open("HumanStory.txt");
   
  }
  else if(selectRace == "Dwarf" || selectRace == "dwarf"){
   fin4.open("DwarfStory.txt");
  }
  else if(selectRace == "Elf" || selectRace == "elf"){
   fin6.open("ElfStory.txt");
  }
  else{
   cout << "CHOOSE AN ACTUAL RACE JACKASS" << endl;
   cin >> selectRace;
  }
 }
 UserRace.SetRace(selectRace);
 fout << UserRace.GetRace() << endl;
 
 fin.close();
 
 cout << "Now pick your class from these choices: ";
 
 fin1.open("Class.txt");
 
 if(!fin1.is_open()){
  cout << "No file found" << endl;
  return 1;
 }
 getline(fin1, classes);

 cout << classes << endl << endl;
 cin >> selectClass;
 cout << endl;
 
 while(selectClass != "Fighter" && selectClass != "fighter" && selectClass != "Wizard" && selectClass != "wizard" && selectClass != "Archer" && selectClass != "archer"){
  
   cout << "CHOOSE AN ACTUAL CLASS JACKASS" << endl;
   cin >> selectClass;
 }
 
 
 if(selectClass == "Fighter" || selectClass == "fighter"){
   strength = 18;
   constitution = 16;
   dexterity = 16;
   charisma = 14;
   inteligence = 12;
   wisdom = 10;
  }
  else if(selectClass == "Wizard" || selectClass == "wizard"){
   strength = 10;
   constitution = 12;
   dexterity = 14;
   charisma = 16;
   inteligence = 16;
   wisdom = 18;
  }
  else if(selectClass == "Archer" || selectClass == "archer"){
   strength = 16;
   constitution = 16;
   dexterity = 18;
   charisma = 12;
   inteligence = 14; 
   wisdom = 10;
   
  }
  
  fin1.close();
  
  //moves skill points into our skill point class
 UserSkill.SetStrength(strength);
 UserSkill.SetConstitution(constitution);
 UserSkill.SetDexterity(dexterity);
 UserSkill.SetCharisma(charisma);
 UserSkill.SetIntelligence(inteligence);
 UserSkill.SetWisdom(wisdom);
 
 
 UserClass.SetClass(selectClass);
 fout << UserClass.GetClass() << endl;
 
 fout << "Strength: " << UserSkill.GetStrength() << endl;
 fout << "Constitution: " << UserSkill.GetConstitution() << endl;
 fout << "Dexterity: " << UserSkill.GetDexterity() << endl;
 fout << "Charisma: " << UserSkill.GetCharisma() << endl;
 fout << "Inteligence: " << UserSkill.GetIntelligence() << endl;
 fout << "Wisdom: " << UserSkill.GetWisdom() << endl;
 
 if(selectRace == "Human" || selectRace == "human"){
   getline(fin5, fileStory);
   cout << fileStory;
  }
  else if(selectRace == "Dwarf" || selectRace == "dwarf"){
   cout << fin4 << endl;
  }
  else if(selectRace == "Elf" || selectRace == "elf"){
   cout << fin6;
  }
  
  cout << "Where would you like to start? Market or Quest: " << endl << endl;
  cin >> marketOrQuest;
  cout << endl;
  
  if(selectRace == "Human" || selectRace == "human"){
   for(int j = 0; j < 6 ; j++){
    fin5 >> displayArray[j];
   }
   for(int k = 0; k < 6 ; k++){
    cout << displayArray[k];
   }
  }
  else if(selectRace == "Dwarf" || selectRace == "dwarf"){
   for(int j = 0; j < 6 ; j++){
    fin4 >> displayArray[j];
   }
   for(int k = 0; k < 6 ; k++){
    cout << displayArray[k];
   }
  }
  else if(selectRace == "Elf" || selectRace == "elf"){
   for(int j = 0; j < 6 ; j++){
    fin6 >> displayArray[j];
   }
   for(int k = 0; k < 6 ; k++){
    cout << displayArray[k];
   }
  }
  
/*  for(int j = 0; j < 6 ; j++){

    fin >> displayArray[j];

}

for(int k = 0; k < 6 ; k++){

    cout << displayArray[k];

}*/
  if(marketOrQuest == "Quest" || marketOrQuest == "quest"){
   cout << "Ok, so at the quest board, there seems to be only one quest left..." << endl;
   fin7.open("quest.txt");
   cout << fin7;
  }
  else if(marketOrQuest == "Market" || marketOrQuest == "market"){
   cout << "Here at the market, there is just one simple shop that has all your needs." << endl;
   cout << "The shops inventory is: " << endl << endl;
   fin3.open("Equipment.txt");
   
   for(int i = 0; i < ARRAY_SIZE; i++){
    
    fin3 >> equipName[i];
    fin3 >> equipQuantity[i];
    cout << i + 1 << ". " << equipName[i] << " " << equipQuantity[i] << endl;
   }
  }
 cout << endl;
 cout << "How much of each item would you like? Type 'All' to take all or type 'Select' to choose what items you want to take:" << endl << endl;
 cin >> userChar;
 cout<< endl;
 if(userChar == "All" || userChar == "all"){
  cout << "Great, I was getting rid of all of it anyways" << endl;
  for(int i = 0; i < ARRAY_SIZE; i++){
    fout << i + 1 << ". " << equipName[i] << " " << equipQuantity[i] << endl;
   }
 }
 else if(userChar == "Select" || userChar == "select"){
  cout << "C'mon, I thought you were cool... just take it all and don't waste my time, I have better things to do!" << endl;
  //"Sorry bud, I only deal in bulk, take it all or leave it"
  for(int i = 0; i < ARRAY_SIZE; i++){
    fout << i + 1 << ". " << equipName[i] << " " << equipQuantity[i] << endl;
   }
 }
 if(marketOrQuest == "Quest" || marketOrQuest == "quest"){
  cout << "Ok, time to go to the market." << endl;
  cout << "Here at the market, there is just one simple shop that has all your needs." << endl;
  cout << "The shops inventory is: " << endl << endl;
  fin3.open("Equipment.txt");
   
  for(int i = 0; i < ARRAY_SIZE; i++){
   
   fin3 >> equipName[i];
   fin3 >> equipQuantity[i];
   cout << i + 1 << ". " << equipName[i] << " " << equipQuantity[i] << endl;
   }
 }
 else if(marketOrQuest == "Market" || marketOrQuest == "market"){
  cout << "Now that you have your stuff, lets go to the quest board" << endl;
  cout << "Ok, so at the quest board, there seems to be only one quest left..." << endl;
  fin7.open("quest.txt");
  cout << fin7;
 }
 
 cout << "Now that you are all ready for your quest, lets begin the journey!!!" << endl << endl;
 
 cout << "5 days later" << endl << endl;
 
 cout << "Now that we are at the cave, what would you like to do? Go 'in' or 'stay' " << endl << endl;
 cin >> userChar;
 if(userChar == "In" || userChar == "in"){
  cout << "Ok, so this cave is scary and unnecesary, but oh well..." << endl << endl;
 }
 else if(userChar == "Stay" || userChar == "stay"){
  
  cout << "Don't be a pansy, you are going in wether you like it or not! " << endl << endl;
 }
  cout << "Inside this wonderful yet dark cave, all you can see is a faint light way off in the distance" << endl;
  cout << "And I mean, way off in the distance" << endl;
  cout << "I mean, like, are you some magician or some shit?" << endl;
  if(selectClass == "Wizard" || selectClass == "wizard"){
   cout << "Oh, well that makes sense then" << endl;
  }
  else{
   cout << "Well then you are just some special ass person" <<endl;
  }
 
 cout << "As you walk along in this dark cave with your \"special\" eyes, you start to smell sulfur." << endl;
 cout << "Or rotten eggs, I'm not too sure, you choose which one" << endl;
 cout << "are you sure you want to continue? 'Yes' or 'No':" << endl << endl;
 cin >> userChar;
 if(userChar == "Yes" || userChar == "yes"){
  cout << "Ok, but I am getting a dark fealing about this." << endl << endl;
 }
 else if(userChar == "No" || userChar == "no"){
  cout << "Well, i have some bad news. It seems that when you look back, there is just..... a wall." << endl;
 }
 cout << "Now that you are reaching the light, (crazy bastard) you smell nothing but sulfur and it is hot as hell." << endl;
 cout << "Now that you have stepped into the light, you are greated by none other than our local friend, the Balrog" << endl;
 cout << "Since he is here, I'm out and you are on your own. Goodluck!!!" << endl;
 cout << "Oh, and by the way, I'm the one that put up that quest." << endl;
 
 cout << endl << endl << endl;
 cout << "As valiantly as you think you may fight, the first thing the Balrog (We'll call him bob for short) stabbs you in the chest with his sword" << endl;
 cout << "With that, your story ends.... Or does it?" << endl;
 
 cout << endl << endl << endl;
 cout << "Nah, I'm messing wtih you, you tottaly died like a bitch" << endl;
 cout << "Try again?" << endl;
 
 fin.close();
 fin1.close();
 fin2.close();
 fin3.close();
 fin4.close();
 fin5.close();
 fin6.close();
 fin7.close();
 fout.close();
 
 return 0;
}
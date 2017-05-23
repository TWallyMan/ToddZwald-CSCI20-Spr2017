#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Race{
    private:
        string race_;
    
    public:
        Race(){
            race_ = "Random";
        }
        void SetRace(string characterRace){
            race_ = characterRace;
        }
        string GetRace(){
            return race_;
        }
};

class Class : Race{
    private:
       string class_;
    
    public:
        Class(){
            string class_ = "Random";
        }
        void SetClass(string characterClass){
            class_ = characterClass;
        }
        string GetClass(){
            return class_;
        }
};

class SkillPoints : Class{
    private:
        int strength_;
        int constitution_;
        int dexterity_;
        int charisma_;
        int intelligence_;
        int wisdom_;
    
    public:
        
        void SetStrength(int strength){
            
            strength_ = strength;
        }
        void SetConstitution(int constitution){
            
            constitution_ = constitution;
            
        }
        void SetDexterity(int dexterity){
            
            dexterity_ = dexterity;
            
        }
        void SetCharisma(int charisma){
            
            charisma_ = charisma;
            
        }
        void SetIntelligence(int intelligence){
            
            intelligence_ = intelligence;
            
        }
        void SetWisdom(int wisdom){
            
            wisdom_ = wisdom;
            
        }
        int GetStrength(){
            
            return strength_;
            
        }
        int GetConstitution(){
            
            return constitution_;
            
        }
        int GetDexterity(){
            
            return dexterity_;
            
        }
        int GetCharisma(){
            
            return charisma_;
            
        }
        int GetIntelligence(){
            
            return intelligence_;
            
        }
        int GetWisdom(){
            
            return wisdom_;
            
        }
        
};
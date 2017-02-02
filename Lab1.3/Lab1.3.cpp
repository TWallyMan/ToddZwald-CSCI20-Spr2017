// Todd Zwald
// 2/2/17
// CSCI20 T-TH


// This program is designed to take the total population of the united states from
// start date of 2/2/17 around 2:30 pm and estimate what the total population will be
// after an input of years into the future.


#include <iostream>
using namespace std;


int main () {
    
    long totalUSPopulation = 324472950;                                // Population as of 2/2/17 @ 2:30 pm
    long numSecsPerBabyBorn = 8;
    long numSecsPerDay = 60 * 60 * 24;                                 // Total seconds per day
    long numSecsPerYear = numSecsPerDay * 365;                         // Total seconds per year
    long totalBabiesPerYear = numSecsPerYear / numSecsPerBabyBorn;     // Babies being born per year
    long numSecsPerDeath = 11;                                         
    long totalDeathsPerYear = numSecsPerYear / numSecsPerDeath;        // Deaths per year
    long numSecsPerImmigrant = 30;                                     
    long totalImmigrantPerYear = numSecsPerYear / numSecsPerImmigrant; // Immigrants per year
    long totalSecsPerNetGain = 15;
    long totalNetGainPerYear = numSecsPerYear / totalSecsPerNetGain;   // Net Gain per year
    long numYearsInFuture;                                             // Holding for user input of future years
    
    
    cout << "Enter number of years to see estimated future Population: ";
    cin >> numYearsInFuture; // User inputs how many years they want to Estimate in the future
    cout << endl;
    
    // Equation to output estimated pupolation compared to original US population as determined in totalUSPopulation
    long totalFuturePopulation = (totalUSPopulation + totalBabiesPerYear + totalImmigrantPerYear - totalDeathsPerYear + totalSecsPerNetGain) * numYearsInFuture;
    
    cout << "Estimated future population will be: " << totalFuturePopulation << endl;
}
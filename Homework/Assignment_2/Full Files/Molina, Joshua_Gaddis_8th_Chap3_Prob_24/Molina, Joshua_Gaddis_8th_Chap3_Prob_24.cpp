/* 
  File:   Molina, Joshua_Gaddis_8th_Chap3_Prob_24
  Author: Joshua Molina
  Created on January 10, 2017, 11:23 PM
  Purpose:  This Program is a fun word game.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string hshrName, hshrAge, cityName, collegeName, profession, animalType;
    string petName;
    
    //Input values
    cout <<"Enter a name, guy or gal ";
    cin >> hshrName;
    cout <<"Enter an age ";
    cin >> hshrAge;
    cout <<"Enter a name of a city ";
    cin >> cityName;
    cout <<"Enter a name of a College ";
    cin >> collegeName;
    cout <<"Enter a profession ";
    cin >> profession;
    cout <<"Enter a type of animal ";
    cin >> animalType;
    cout <<"Enter a pet name ";
    cin >> petName;

    //Process by mapping inputs to outputs
    
    //Output values
    cout <<"There was once a person named " << hshrName << " who lived \n";
    cout <<"in " << cityName << ".  At the age of " << hshrAge << ",\n";
    cout <<" " << hshrName << " went to college at " << collegeName << ".\n";
    cout <<"  " << hshrName << " graduated and went to work as a\n";
    cout <<" " << profession << ".  Then, " << hshrName << " adopted \n";
    cout <<"a " << animalType << " named " << petName << ".  They both \n";
    cout <<"lived hapilly ever after!";
            

    //Exit stage right!
    return 0;
}
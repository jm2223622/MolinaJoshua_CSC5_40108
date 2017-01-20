/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_4_Calories_Burned
  Author: Joshua Molina
  Created on January 17, 2017 11:31 PM
  Purpose:  4. Calories Burned 
 * Running on a particular treadmill you burn 3.6 calories per minute.  Write a
 * program that uses a loop to display the number of calories burned after 
 * 5, 10, 15, 20, 25, and 30 minutes.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float CPM = 3.6; //Calories Per Minute that are burned. 
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float calBurn; //Calories Burned.
    float i;
    i = 5;
    //Input values
     cout <<"";
    //Process by mapping inputs to outputs
    
    //Output values
    for ( i=5; i <=30; i+=5)
    {
        calBurn = i * CPM;
        cout <<"You burned "<<calBurn<<" calories in "<<i<<" minutes!"<<endl;
    }
    //Exit stage right!
    return 0;
}
/* 
  File:   Molina, Joshua_Gaddis_8th_Chap3_Prob_9.cpp
  Author: Joshua Molina
  Created on January 10, 2017, 10:24 PM
  Purpose:  This program will count calories in cookies the user has consumed.
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    double cookie, howMany, totalCal;
    
    //That is one GOOD cookie!
    cookie = 100;
    
    //Input values
    cout <<"How Many Calories Did You Just Eat ? \n";
    cout <<"How many cookies did you consume ? " ;
    cin >> howMany;
   
    //Process by mapping inputs to outputs
    totalCal = cookie * howMany;
    
            
    //Output values.
    cout <<"You have consumed " << totalCal << " calories!"; 
            

    //Exit stage right!
    return 0;
}

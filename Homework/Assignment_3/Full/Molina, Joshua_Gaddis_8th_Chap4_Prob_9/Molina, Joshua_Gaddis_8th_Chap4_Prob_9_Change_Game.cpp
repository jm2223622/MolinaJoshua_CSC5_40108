/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_9
  Author: Joshua Molina
  Created on January 16, 2017, 5:17 PM
  Purpose:  This program is a game for the user to attempt to make 1 U.S dollar
 * by using only coins.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    double Pens, Nicks, Dimes, Quarts, Total;
    //Input values
    cout << "Change For a Dollar Game! \n";
    cout << "Try and make 1 U.S dollar using U.S coins! \n";
    cout << "GOODLUCK!!!!!!!\n";
    cout << "Enter number of pennies: \n";
    cin >> Pens;
    cout << "Enter number of nickles: \n";
    cin >> Nicks;
    cout << "Enter number of dimes: \n";
    cin >> Dimes;
    cout << "Enter number of quarters: \n";
    cin >> Quarts;
    
    Total = (Pens * 0.01) + (Nicks * 0.05) + (Dimes * 0.10) + (Quarts * 0.25);
    if (Total == 1.00)
    {
        cout << "Congratulations YOU WON! :D";
    }
    else if (Total < 1.00 && Total > 0)
    {
       cout << "Sorry that amount is less than 1.00.  Please Try Again! :)"; 
    }
    else if (Total > 1.00)
    {
        cout << "Sorry that amount is more than 1.00. Please Try Again! :)";
    }
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
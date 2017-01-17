/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_2
  Author: Joshua Molina
  Created on January 16, 2017, 11:26 AM
  Purpose:  This program will determine whether the date entered by the user is
 * Magic or not magic.
 */

//System Libraries
#include <iostream>
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
    int monT, daY, yeaR;
    int long maGic;
    //Input values
    cout << "Is the date magical? \n";
    cout << "Enter a month in numeric form: \n";
    cin >> monT;
    cout << "Enter a day in numeric form: \n";
    cin >> daY;
    cout << "Enter a year in numeric form: \n";
    cin >> yeaR;   
    maGic = (monT * daY);

    //Process by mapping inputs to outputs 
    //Output values
    if (maGic == yeaR)
    {
        cout << "it is magic" << endl;
    }
    else 
        cout <<"it is not magic" << endl;
    //Exit stage right!
    return 0;
}
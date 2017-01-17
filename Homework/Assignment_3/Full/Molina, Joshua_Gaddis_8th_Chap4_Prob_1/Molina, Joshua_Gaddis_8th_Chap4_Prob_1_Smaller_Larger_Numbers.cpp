/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_1
  Author: Joshua Molina
  Created on January 15, 2017, 11:36 PM
  Purpose:  This program will use a conditional operator to determine which
 * of two numbers inputed by the user are smaller or larger.
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
    int long fN;
    int long sN;
    double more;
    //Input values
    cout << "Compute which integer is bigger and smaller. \n";
    cout << "Input an integer: ";
    cin >> fN;
    cout << "Input another integer: ";
    cin >> sN;

    //Process by mapping inputs to outputs
    cout << "The first number " << fN << " is ";
    cout << (fN > sN ? "larger" : "smaller.");
    cout << " than the second number " << sN << ".";
    
    //Output values

    //Exit stage right!
    return 0;
}
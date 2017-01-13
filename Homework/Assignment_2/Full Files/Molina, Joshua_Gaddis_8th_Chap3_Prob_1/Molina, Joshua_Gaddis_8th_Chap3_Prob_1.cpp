/* 
  File:   Molina, Joshua_Gaddis_8th_Chap3_Prob_1
  Author: Joshua Molina
  Created on January 11, 2017, 11:35 PM
  Purpose:  This program will calculate the gas mileage of a vehicle.
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
    //The variables used in this program will be amount of gallons, amount of 
    //miles the car can be driven on a full tank, and the total miles per 
    //gallon.
    int amountofGal, milesonFull, milesperGal;
    
    cout << "This program calculates miles per gallon .\n";
    cout << "Enter the amount of gallons the vehicle can hold ";
    cin >> amountofGal;
    cout << "Enter the amount of miles the vehicle can drive on a full tank ";
    cin >> milesonFull;
    milesperGal = milesonFull / amountofGal;
    cout << "The vehicle gets " << milesperGal << " Miles Per Gallon";
    
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
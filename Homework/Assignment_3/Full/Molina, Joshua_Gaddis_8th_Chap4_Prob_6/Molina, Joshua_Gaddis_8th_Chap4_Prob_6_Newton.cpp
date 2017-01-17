/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_5
  Author: Joshua Molina
  Created on January 16, 2017, 2:38 PM
  Purpose:  This program will determine the weight of an object with its mass.
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
    double mass, newton;
    
    //Input values
    cout << "Enter the mass of an object.\n";
    cin >> mass;

    //Process by mapping inputs to outputs
    newton = mass*9.8;
    
    //Output values
    if (newton>1000)
    {
        cout << "The object is to heavy!";
    }
    else if (newton<10)
    {
        cout << "The object is to light!";
    }
    else 
            cout << "The weight of this object is " << newton << " newtons";
    

    //Exit stage right!
    return 0;
}
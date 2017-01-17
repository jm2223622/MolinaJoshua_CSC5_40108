/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_8_Colors
  Author: Joshua Molina
  Created on January 16, 2017, 4:37 PM
  Purpose:  This program will prompt the user to mix primary colors only.
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
    char red, blue, yellow;
    string color1, color2;
    
    //Input values
    cout << "Please enter two primary colors to mix.\n";
    cout << "Choose two or these red, blue, or yellow.\n";
    getline(cin, color1);
    
    getline(cin, color2);
    //Process by mapping inputs to outputs
    if (color1 == "red" && color2 == "blue")
    {
        cout << "Those two colors make: Purple";
    }       
    else if (color1 == "blue" && color2 == "yellow")
    {
        cout << "Those two colors make: Green ";
    }
    else if (color1 == "red" && color2 =="yellow")
    {
        cout << "Those two colors make: Orange ";
    }
    else
    {
        cout << "error! not a valid color";
    }
    
   
    //Output values

    //Exit stage right!
    return 0;
}
/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_1
  Author: Joshua Molina
  Created on January 17, 2017, 6:34 PM
  Purpose:  This program will prompt the user to input a positive integer and 
 * the program will then get the sum of all the integers from 1 to that number.
 * Negative integers will result in an error!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int MIN_NUM = 1;//Assigns starting point.
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int long Input;
    int num = MIN_NUM;
    // Not a proper integer

    //Input values
    cout << "Enter a positive integer: ";
    cin >> Input;
    //Process by mapping inputs to outputs
    
    //Output values
    //The output validation.
        while (0 >= Input)
    {
        cout << "Not a positive integer! Please try again: ";
        cin >> Input;
    }
    //The program runs as soon as the requirements are met.
    while (num <=Input)
    {
        cout << num << ", ";
        num ++;
    }

    //Exit stage right!
    return 0;
}
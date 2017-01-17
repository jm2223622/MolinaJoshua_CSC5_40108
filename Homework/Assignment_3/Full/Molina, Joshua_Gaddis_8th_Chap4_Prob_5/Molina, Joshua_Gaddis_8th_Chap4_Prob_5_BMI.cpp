/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_4_BMI
  Author: Joshua Molina
  Created on January 16, 2017, 1:17 PM
  Purpose:  This program will determine your BMI and if weight is optimal.
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
    double wght, hgt;
    double long bmi, htft; 
    
    //Input values
    cout << "This program will determine BMI \n";
    cout << "Please enter your weight in pounds: \n";
    cin >> wght;
    cout << "Please enter your height in inches: \n";
    cin >> hgt;
    
    //Process by mapping inputs to outputs
    
    bmi = (wght*703)/(hgt*hgt);
    //Output values
    if (bmi>25)
    {
        cout << "You are overweight.";
    }
    else if (bmi<18.5)
    {
            cout << "You are underweight.";
    }
    else if (bmi>18.5 && bmi<25)
        cout << "You are at optimal weight."; 
    
    //Exit stage right!
    return 0;
}
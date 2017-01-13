/* 
  File:   Molina, Joshua_Gaddis_8th_Chap3_Prob_3.cpp
  Author: Joshua Molina 
  Created on January 11, 2017, 10:43 PM
  Purpose:  //This program will calculate the average test score with a fixed 
 * point notation at one decimal point of precision.
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    
    //
    double test1, test2, test3, test4, test5, test6; //Holds the scores.
  double average; //Holds the average.
  
  //Get the five test scores.
 cout << "Input 5 test scores to find the average. \n";
 cout << "Enter the first test score ";
 cin >> test1;
 cout << "Enter the second test score ";
 cin >> test2;
 cout << "Enter the third test score ";
 cin >> test3;
 cout << "Enter the fourth test score ";
 cin >> test4;
 cout << "Enter the fifth test score ";
 cin >> test5;
    
    //Input values
 average = (test1 + test2 + test3 + test4 + test5) / 5.0; 
    
    //Process by mapping inputs to outputs
 
    
    //Output values
cout << setprecision(1) << fixed;
cout << "The average score is: " << average << endl;

    //Exit stage right!
    return 0;
}
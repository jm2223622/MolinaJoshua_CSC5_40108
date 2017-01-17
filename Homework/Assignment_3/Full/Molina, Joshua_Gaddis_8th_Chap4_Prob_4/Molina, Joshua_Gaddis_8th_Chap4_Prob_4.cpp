/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_4
  Author: Joshua Molina
  Created on January 16, 2017, 12:03 PM
  Purpose:  This program will determine the Area of a two different rectangles 
 * and output which one is greater or if the areas are equal.
 * 
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
    double length1, length2, width1, width2 ;
    double areaofFirst, areaofSec;
    //Input values
    cout << "Area of two rectangles! \n";
    cout << "Enter the length of the first angle : \n";
    cin >> length1;
    cout << "Enter the width of the first angle : \n";
    cin >> width1;
    areaofFirst=length1 * width1;
    cout << "Enter the length of the second angle : \n";
    cin >> length2;
    cout << "Enter the width of the second angle : \n";
    cin >> width2;
    areaofSec=length2 * width2;
    
    //Process by mapping inputs to outputs

    //Output values
    cout << "The area of the fist rectangle is: " << areaofFirst << " \n";
    cout << "The area of the second rectangle is: " << areaofSec << "\n";
    
    if (areaofFirst>areaofSec)
    {
        cout << "The area of the fist rectangle is greater.\n" << endl;
    }
    else if (areaofFirst<areaofSec) 
    {
        cout << "The area of the second rectangle is greater.\n" << endl;
    }
    else if (areaofFirst == areaofSec)
    {
        cout << "The areas of the rectangles are the same.\n" <<endl;
    }
    else
    {
        cout << "does not compute! \n" << endl;
    }
    
    //Exit stage right!
    return 0;
}
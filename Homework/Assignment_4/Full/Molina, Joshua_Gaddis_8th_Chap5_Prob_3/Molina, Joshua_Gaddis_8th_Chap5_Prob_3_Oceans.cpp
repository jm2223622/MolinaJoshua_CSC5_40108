/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_3_Ocean Levels
  Author: Joshua Molina
  Created on January 17, 2017, 10:33 PM
  Purpose: 3. Ocean Levels
 * Assuming the ocean’s level is currently rising at about 1.5 millimeters per 
 * year, write a program that displays a table showing the number of 
 * millimeters that the ocean will have risen each year for the next 25 years.
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
const float rise = 1.5; //Waters rate of yearly increase.
const float MIN_NUM = 1; //Starting point from the first year. 
const float MAX_NUM = 25; //Ending point being the 25th year.

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float num = MIN_NUM; //A counter set for the while statement.
    //Input values
   
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "The ocean’s level is currently rising at about 1.5 \n"; 
    cout << "millimeters per year.  Bellow is a table displaying the \n";
    cout << "yearly increase rate over a 25 year period."<<endl;
    cout << "----------------------------------------------------------"<<endl;
    //Writing the while statement. 
    while (num <=MAX_NUM)
    {
        cout <<"Year "<<num<<"\t\t"<<(num * 1.5)<<" millimeters"<<endl;
        num ++;
    }
    
    //Exit stage right!
    return 0;
}
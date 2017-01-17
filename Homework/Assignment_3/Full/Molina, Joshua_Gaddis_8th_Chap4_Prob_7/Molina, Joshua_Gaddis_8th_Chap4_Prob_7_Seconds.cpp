/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_7_Seconds
  Author: Joshua Molina 
  Created on January 16, 2017, 5:45 PM
  Purpose:  This program will determine how many days are in a month.
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
   	
int year = 0;
int month = 0;
int days;
cout << "Enter a date to see how many days are in that month: \n";
cout << "Enter Month: ";
cin >> month;
cout << "Enter Year: ";
cin >> year;
	
if (month == 4 || month == 6 || month == 9 || month ==11)
    days = 30;

else if (month == 02)
{
    bool leapyear = (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
    if (leapyear == true)
        days = 28;
    else
        days = 29;
}
else
    days = 31;
cout << "" << days << " Days";

    //Exit stage right!
    
    return 0;
}
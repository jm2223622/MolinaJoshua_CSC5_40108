/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_2
  Author: Joshua Molina
  Created on January 17, 2017, 7:00 PM
  Purpose:  2. Characters for the ASCII Codes.
 * Write program that uses a loop to display the characters for the ASCII codes
 * 0 through 127.  Display 16 characters on each line. 
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
    float letter;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout <<"Display the characters for ASCII codes 0 through 127.\n";
    letter = 0;
    for (int count = 0; count <=127; count++)
    {
        if (count % 16 ==0)
            cout << endl;
        
        cout<<letter<<" "<<endl;
        letter++;
    }
    //Exit stage right!
    return 0;
}
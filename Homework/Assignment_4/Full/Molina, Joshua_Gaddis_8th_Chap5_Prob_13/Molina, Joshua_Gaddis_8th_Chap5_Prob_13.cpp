/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_13
  Author: Joshua Molina
  Created on January 20, 2017, 9:48 AM
  Purpose:  Prob 13. The Greatest and Least of These.
 * Write a program with a loop that lets the user enter a series of integers.
 * The user should enter -99 to signal the end of the series.  After all the 
 * numbers have been entered. the program should displays the largest and 
 * smallest numbers entered.    
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
    float Num = 0,//Marks the starting point.
          High,//
          Low,
          Count = 0;//A counter for the if statement.

    //Input values
    
    while (Num != -99)//Checks if the number entered is -99.
    {
        //If the number is greater then the loop begins.
        cout <<"Enter whole numbers. Enter -99 to quit the program.\n";
        cin >> Num;
        if (Count ==0)//
        {
            High = Num;
            Low = Num;
        }
        else //Comparison of numbers to order them.
        {
            if (Num > High && Num !=-99) 
                High = Num;
            else if (Num < Low && Num !=-99)
                Low = Num;
        }
        Count++;
    }
       
    //Process by mapping inputs to outputs
    
    //Output values
    cout <<"Highest number entered was "<<High<<endl;
    cout <<"Smallest number entered was "<<Low<<endl;

    //Exit stage right!
    return 0;
}
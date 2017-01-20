/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_7
  Author: Joshua Molina
  Created on January 18, 2017, 11:14 AM
  Purpose:  7. Pennies for Pay
 * Write a program that calculates how much a person would earn over a period of
 * time if his or her salary is one penny the first day and two pennies the 
 * second day, and continues to double each day. The program should ask the 
 * user for the number of days. Display a table showing how much the salary was 
 * for each day, and then show the total pay at the end of the period.
 * The output should be displayed in a dollar amount, not the number of pennies.
 * Input Validation: Do not accept a number less than 1 for the number of days
 * worked.
 *      
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
 

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int NUMDAYS = 1; //The minimum amount of days to run the program.
    float Money = 1.0;//The amount of monet added in 1.0 for 1 penny a day.
    float Tot;//Variable for Total amount earned.
    float Daily;//Variable for Daily amount earned.
    //Input values
    cout <<"Enter number of days worked: ";
    cin >>NUMDAYS;
    
    //Process by mapping inputs to outputs
    
    //Output values
    while (NUMDAYS <1)//A loop for Input validation.
    {
        cout <<"Must be at least 1 day.  Try again: \n";
        cin >>NUMDAYS;
    }
    cout <<fixed<<setprecision(2)<<showpoint<<endl;//For the ending of Total.
    for (int i = 1; i <=NUMDAYS; i++)
    {
        Daily = Money/100;
        cout <<"Day "<<i<<" You earned: $ "<<Daily<<"\n";
        Tot += Money/100;
        Money *= 2;//Multiplies Money by 2
    }
    cout <<"\n";
    cout <<"You have earned: $"<<Tot<<" in "<<NUMDAYS<<" days."<<endl;
    //Exit stage right!
    return 0;
}
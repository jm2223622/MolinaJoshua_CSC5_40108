/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_5_Membership_Fee_Increase
  Author: Joshua Molina
  Created on January 18, 2017, 11:13 AM
  Purpose: 5. Membership Fees Increase
 * A country club, which currently charges $2,500 per year for 
 * membership, has announced it will increase its membership fee by 4% each 
 * year for the next six years. Write a program that uses a loop to display 
 * the projected rates for the next six years. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float Year_Inc = 0.04; //Percentage of annual increase.
const float MIN_NUM = 1; //Starting point being the first year.
const float MAX_NUM = 6; //Ending point being the last year of show increase.
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float num = MIN_NUM; //A counter set for the while statement.
    float Memfee = 2500; //Annual Membership cost.
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values   
    cout <<"The country club is increasing its yearly fee by 4 percent.\n";
    cout <<"Bellow are the yearly rates for the next six years.\n";
    cout <<"----------------------------------------------------------"<<endl;
    cout <<fixed<<setprecision(2)<<showpoint<<endl;//For the ending of Total.
    for (num = MIN_NUM; num <= MAX_NUM; num++)
        {
        Memfee = Memfee + (Year_Inc*Memfee);
        cout <<"Year "<<num<<"\t Yearly Membership: $"<<(Memfee)<<endl;
    }
    //Exit stage right!
    return 0;
}
/* 
  File:   Molina, Joshua_Gaddis_8th_Chap6_Prob_1_MarkUpCost
  Author: Joshua Molina
  Created on February 1, 2017, 11:58 PM
  Purpose:  1.Mark Up
 * Write a program that asks the user to enter an item’s wholesale 
 * cost and its markup percentage. It should then display the item’s
 *  retail price. 
 * The program should have a function named  calculateRetail  that 
 * receives the wholesale cost and the markup percentage as arguments
 *  and returns the retail price of the item.  
 * Input Validation: Do not accept negative values for either the 
 * wholesale cost of the item or the markup percentage. 
 */

//System Libraries
#include <iostream>


using namespace std;
float calculateRetail (float,float);
//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float wholesaleCost = 0;//Set to 0 
    float percentage = 0;//Set to 0
    float totalPrice = 0;//Set to 0
    cout <<"Enter an items wholesale cost: "<<endl;
        cin >>wholesaleCost;
    cout <<"Enter the items markup percentage: "<<endl;
    cin >>percentage;
        
    //Input validation and programming.
    while (wholesaleCost < 0 || percentage < 0)
    {
        cout <<"Please input a non negative number!"<<endl;
        cin >>wholesaleCost >>percentage; 
    }
        totalPrice = calculateRetail(wholesaleCost, percentage);
        cout <<"The total cost is : $"<<totalPrice;
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}

float calculateRetail(float cost, float percent)
{   
    float totalCost = 0;
    totalCost = ((cost / 100) * percent) + cost;
    return totalCost;
}
/* 
  File:   Gaddis_8th_Chap2_Prob4
  Author: Joshua Molina
  Created on January 10, 2017, 7:35 PM
  Purpose:  This program computes the tax and tip on a restaurant bill with the
 *          total of $88.67 the tax is $6.75 and the tip is 20 percent.
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
    //Variables will hold the meal cost, the
    //tax amount, the tip amount, and the 
    //total bill amount. 
 
    double mealCost = 95.00, taxAmount, tipAmount, totalBill;
    
    //Amount of state tax, 4 percent added to the amount due
    taxAmount = 6.75;
    
    //Amount of County tax, 2 percent added to the amount due
    tipAmount = mealCost * 0.2; 
    
    //Amount After Taxes, adding State Tax, County Tax and amount after taxes.
    totalBill = mealCost + taxAmount + tipAmount;

    //Display The Results.
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;
    

    //Exit stage right!
    return 0;
}
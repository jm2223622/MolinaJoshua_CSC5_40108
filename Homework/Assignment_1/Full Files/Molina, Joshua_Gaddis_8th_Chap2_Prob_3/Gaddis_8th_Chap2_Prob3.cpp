/* 
  File:   Gaddis_8th_Chap2_Prob3
  Author: Joshua Molina
  Created on January 10, 2017, 7:35 PM
  Purpose:  This program will compute the total sales tax on
 * a $95 purchase including the 4 percent sales tax and a 2 
 * percent county tax.
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
    //Variables will hold the amount due, the
    //amount of the state tax, the amount of 
    //the county tax, and the amount after taxes.
    double amountDue = 95.00, stateTax, countyTax, amountaftertaxes;
    
    //Amount of state tax, 4 percent added to the amount due
    stateTax = amountDue * 0.04;
    
    //Amount of County tax, 2 percent added to the amount due
    countyTax = amountDue * 0.02; 
    
    //Amount After Taxes, adding State Tax, County Tax and amount after taxes.
    amountaftertaxes = amountDue + stateTax + countyTax;

    //Display The Results.
    cout << "Amount Due: $" << amountDue << endl;
    cout << "State Tax: $" << stateTax << endl;
    cout << "County Tax: $" << countyTax << endl;
    cout << "Amount Due After Taxes" << amountaftertaxes << endl;
    

    //Exit stage right!
    return 0;
}
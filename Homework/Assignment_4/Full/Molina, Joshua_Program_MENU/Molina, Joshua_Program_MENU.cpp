/* 
  File:   Molina, Joshua_Program_MENU
  Author: Joshua Molina
  Created on January 20, 2017, 11:00 AM
  Purpose:  The 10th problem will be for you to create a menu, that has all 
 * the 9 problems in 1 program/project.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float INT_COUNTER = 1,
            ASCII_CODES = 2,
            OCEAN_LVL = 3,
            CAL_BURN = 4,
            MEM_FEES = 5,
            DIST_TRAVL =6,
            PEN_FOR_PAY = 7,
            CELS_FARH = 8,
            GRT_LST = 9,
            QUIT = 10;
     
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float choice;
    float Input;
    float MIN_NUM;
    float num = MIN_NUM;
    //Input values
    cout <<"Chapter 5 Program Menu. \n";
    cout <<"Please select the program that you wish to run. \n";
    cout <<"--------------------------------------------------\n\n"
            <<"1. Integer Counter\n"
            <<"2. ASCII Codes\n"
            <<"3. Ocean Levels\n"
            <<"4. Calorie Counter\n"
            <<"5. Membership Fees for Country Club\n"
            <<"6. Distance Calculator\n"
            <<"7. Pennies For Pay\n"
            <<"8. Celsius to Fahrenheit Converter\n"
            <<"9. Greatest and Least\n"
            <<"10. Quit\n\n";
    cin >> choice;
    
    //Process by mapping inputs to outputs
    
    //Output values
    if (choice == INT_COUNTER)
    {
    const float MIN_NUM = 1;//Assigns starting point.
    float Input;
    float num = MIN_NUM;
    
    cout << "Enter a positive integer: ";
    cin >> Input;
    }
        if (0 >= Input)
    {
        cout << "Not a positive integer! Please try again: ";
        cin >> Input;
    }
    //The program runs as soon as the requirements are met.
   if (num <=Input)
    {
        cout << num << ", ";
        num ++;
    }
    else if (choice == QUIT)
    {
        cout <<"Program Ending. \n";
    }
    else
    {
        cout<<"The valid choices are 1 - 10.  Try again.\n"<<endl;
    }
    //Exit stage right!
    return 0;
}
    

    
/* 
  File:   Molina__Joshua_Gaddis_8th_Chap7_Prob_2_Rainfall_Stats
  Author: Dr. Mark E. Lehr
  Created on February 6, 2017 4:50PM
  Purpose:  2. Rainfall Statistics
 * Write a program that lets the user enter the total rainfall for each
 * of the 12 months into an array of doubles.  The program should 
 * calculate and display the total rainfall for the year, the average
 * monthly rainfall, and the months with the highest and lowest amounts.
 * Input Validation: Do not accept negative numbers for monthly rainfall
 * figures. 
 */

//System Libraries
#include <iostream>//Standard Library.
#include <iomanip>//For fixed percision totals.
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
    float rainfall[12];//Array set to 12 for months.
    float total = 0;//A total for the output.
    float avg = 0;//Average
    float MAXR = 0;//Maximum rain.
    float MINR = 0;//Minimum rain.
    float tempR =0;//To hold a comparison value.
    //Input values
    //Asigning the values to the rainfall Array.
    for (int i = 0; i < 12; i++)
    {
        cout <<"Please enter number " <<i+1<< ":"<<endl;
        cin >> rainfall[i];         
        total += rainfall[i];//Total holds the sum of total rainfall.
        if (rainfall[i] <= -1)
        {
            cout <<"Not a valid input! please retry.";
            cin >> rainfall[i];
        }
    }
    //Process by mapping inputs to outputs 
    
    // Average
    avg = total / 12;
    
    //Comparison to find out the largest and smallest amount.
    
    MAXR = rainfall[0]; //Set to 0.
    MINR = rainfall[0]; //Set to 0.
    
    for (int i = 1; i <= 12; i++)
    {
        tempR = rainfall[i];
        if (tempR < MINR)
            MINR = tempR;
        if (tempR > MAXR)
            MAXR = tempR;
    }
    //Output values
    
cout <<"Total rainfall was: "<<setprecision(2)<<fixed<<showpoint<<total<<endl;
cout <<"Average rainfall was: "<<setprecision(2)<<fixed<<showpoint<<avg<<endl; 
cout <<"Highest rainfall was: "<<setprecision(2)<<fixed<<showpoint<<MAXR<<endl;
cout <<"Lowest rainfall was: "<<setprecision(2)<<fixed<<showpoint<<MINR<<endl;

    //Exit stage right!
    return 0;
}
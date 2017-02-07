/* 
  File:   Molina__Joshua_Gaddis_8th_Chap6_Prob_4_Calc_Values
  Author: Joshua Molina
  Created on February 1, 2017, 11:58 PM
  Purpose:  4. Safest Driving Area.
 */

//System Libraries
#include <iostream>

using namespace std;

int getNumAccidents(string);
void findLowest (int, int, int, int, int,);

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //Declare Variables
    int accN, accS, accE, accW, accC;
    //Input values
    
    //Process by mapping inputs to outputs
    for (int i = 0; i < 5; i= i++)
    {
        switch (i)
        {
            case 0:
                accN = getNumAccidents("North");
                break;
            case 1:
                accN = getNumAccidents("South");
                break;
            case 2:
                accN = getNumAccidents("East");
                break;    
            case 3:
                accN = getNumAccidents("West");
                break;  
            default:  
                accC = getNumAccidents ("Central");
        }
    }
    
    findLowest(accN, accS, accE, accW ,accC);
    
    
    //Exit stage right!
    return 0;
}

int getNumAccidents(string region)
{
   int accidents = 0;
   
   cout <<"Enter Number of accidents for the region"<<region<<" ";
   cin >>accidents;
   
   while (accidents < 0)
   {
       cout <<"Must Be a positive Number";
       cin >>accidents;
   }
   return accidents;
}

void findLowest(int r1, int r2, int r3, int r4, int r5)
{
    int lowest = 0;
    string region = "";
    
    if (r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5)
    {
        lowest = r1;
        region = "North";
    }
    else if (r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5)
    {
        lowest = r2;
        region = "South";
    }
    else if (r3 < r1 && r3 < r2 && r3 < r4 && r3 < r5)
    {
        lowest = r3;
        region = "East"; 
    }
        else if (r4 < r1 && r4 < r2 && r4 < r3 && r4 < r5)
    {
        lowest = r4;
        region = "West";
    }
    else 
    {
            lowest = r5;
            region = "Central";
    }
    
    cout <<"The region with the lowest accidents is "<<region<<" with\n";
    cout <<" Total number of accidents in that region was "<<lowest<<;
}
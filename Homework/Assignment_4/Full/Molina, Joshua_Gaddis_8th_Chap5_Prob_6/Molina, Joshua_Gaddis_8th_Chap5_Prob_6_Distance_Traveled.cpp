/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_6_Distance_Traveled
  Author: Joshua Molina
  Created on January 18, 2017, 11:10 PM
  Purpose: 6. Distance Traveled
 * 
 * The distance a vehicle travels can be calculated as follows: 
 * distance = speed * time 
 * For example, if a train travels 40 miles per hour for 3 hours, the distance 
 * traveled is 120 miles. 
 * Write a program that asks the user for the speed of a vehicle 
 * (in miles per hour) and how many hours it has traveled. The program should 
 * then use a loop to display the distance the vehicle has traveled for each 
 * hour of that time period. 
 * Input Validation: Do not accept a negative number for speed and do not 
 * accept any value less than 1 for time traveled. 
 * 
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
    float distance, //Output for the distance traveled.
            speed; //User inputs speed in MPH.
        int time; //User inputs amount of time.
    //Input values
distance = (speed * time);
    //Process by mapping inputs to outputs
cout <<"What is the speed of the distance traveled? : ";
cin >> speed;
while (speed <=0 )
{
    cout <<"SPEED MUST BE GREATER THAN 0!";
    cin >> speed;
}
cout <<"How many hours has it traveled? :";
cin >> time;
while (time <1)
{
    cout <<"Must be at least 1 hour! try again.";
    cin >>time;
}
    //Output values
cout << "Hour \tDistance Traveled\n";
cout << "----------------------------\n";
for (int i = 1; i <= time; i++)
{
    distance = speed * i;
    cout <<i<< "\t\t" <<distance<<" Miles."<<endl;
}
    //Exit stage right!
    return 0;
}
/* 
  File:   Molina__Joshua_Gaddis_8th_Chap7_Prob_1_Lrg.Sml.Array_Val
  Author: Joshua Molina
  Created on February 6, 2017, 4:26 PM
  Purpose: 1.Largest/Smallest Array Values
 * Write a program that lets the user enter 10 calues into an Array.
 * The program should then display the largest and smallest values 
 * stored in the array. 
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
    int numbers[10];//Sets Array to 10.
    int smallest = 0;
    int largest = 0;
    int temp = 0;
   
    //Input values
    //A loop for the collection of the numbers in the array.
        for (int i = 0; i < 10; i++)
    {
        cout <<"Please enter number " <<i+1<< ":"<<endl;
        cin >> numbers[i];
    }
    
    //Process by mapping inputs to outputs

    smallest = numbers[0];
    largest = numbers[0];
    
    for (int i = 1; i < 10; i++)
    {
        temp = numbers[i];
        if (temp < smallest)
            smallest = temp;
        
        if (temp > largest)
            largest = temp;
    }
    //Output values
    cout <<"The Largest number is "<<largest<<endl;
    cout <<"The Smallest number is "<<smallest<<endl;
    //Exit stage right!
    return 0;
}
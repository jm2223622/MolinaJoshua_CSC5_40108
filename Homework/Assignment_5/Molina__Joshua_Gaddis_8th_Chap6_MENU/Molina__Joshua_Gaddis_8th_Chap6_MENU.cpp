/* 
  File:   Molina__Joshua_Gaddis_8th_Chap6_MENU
  Author: Joshua Molina
  Created on February 1, 2017, 11:58 PM
  Purpose:  Template to be used in all programming
            projects!
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
void prob1();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Input values
    cout <<"Homework Assignment 5 MENU. \n";
    cout <<"Type 1 for Problem 1: Markup "<<endl;
    cout <<"Type 2 for Problem 3: Winning Division"<<endl;
    cout <<"Type 3 for Problem 4: Safest Driving Area"<<endl;
    cout <<"Type 4 for Problem 5: Falling Distance"<<endl;
    cout <<"Type 5 for Problem 6: Kinetic Energy"<<endl;
    cout <<"Type 6 for Problem 7: Celsius Temperature Table"<<endl;
    cout <<"Type 7 for Problem 8: Coin Toss"<<endl;
    cout <<"Type 8 for Problem 9: Present Value"<<endl;
    cout <<"Type 9 for Problem 10: Lowest Score"<<endl;
    cin >>choice;
    
            //Switch to determine the Problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob3();break;}
            case '3':{prob4();break;}
            case '4':{prob5();break;}
            case '5':{prob6();break;}
            case '6':{prob7();break;}
            case '7':{prob8();break;}
            case '8':{prob9();break;}
            case '9':{prob10();break;} 
            default:
                cout<<"You are exiting the program"<<endl;
        }
        while(choice>='1'&&choice<='9');

    //Exit stage right!
    return 0;
}

float calculateRetail(float cost, float percent)
{   
    float totalCost = 0;
    totalCost = ((cost / 100) * percent) + cost;
    return totalCost;
    cout <<endl;
}

void prob1(){
float calculateRetail (float,float);

//Executable code begins here!!!
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
}
            //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!


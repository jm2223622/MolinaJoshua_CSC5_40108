/* 
  File:   Molina__Joshua_Gaddis_8th_Chap6_Prob_3_ProfitsCalc
  Author: Joshua Molina
  Created on February 1, 2017, 11:58 PM
  Purpose:  3. Winning Division
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
double getSales(string);
void findHighest(float,float,float,float);
float highest;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
double NEsales, SEsales, NWsales, SWsales; 
    for(int i = 0; i < 4; i++)
    {
        switch (i)
        {
            case 0:
        NEsales = getSales ("NE");
        break;
            case 1:
                SEsales = getSales("SE");
                break;
            case 2:
                NWsales = getSales("NW");
                break;
            default:
                SWsales = getSales("SW");
                break;
        }
    }
findHighest(NEsales, SEsales, NWsales, SWsales);   
}

    //Declare Variables
    double getSales(string name)
    {
        double sales = 0;
        
        cout<<"Enter the sales for division"<<name<<"$";
        cin >>sales;
        
        while(sales < 0)
        {
            cout<<"Does not compute please enter another number: $";
            cin >>sales;
    }
        
        return sales;
        
void findHighest(float NEsales,float SEsales,float NWsales, float Swsales)

    double highest = 0;
    string division = "";
    
    if(NEsales > SEsales && NEsales > NWsales && SEsales > SWsales)
    {
        highest = NEsales;
        division = "North East";
    }
    else if(NEsales > SEsales && NEsales > NWsales && SEsales > SWsales)
    {
        highest = NEsales;
        division = "North East";
    }
    else if(SEsales > NEsales && SEsales > NWsales && SEsales > SWsales)
    {
        highest = SEsales;
        division = "South East";
    }
    else
    {
        highest = SWsales;
        division = "South West";
    }
    cout <<"The division with the highest sales is:"<<division<<" with\n";
    cout <<"total sales of : $ "<<highest<<; 
}
    return 0;
}
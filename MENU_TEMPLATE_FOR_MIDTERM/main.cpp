/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joshu
 *
 * Created on January 24, 2017, 1:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char input;
    bool quit = false;

    
    do{
        cout<<"Enter A-C: ";
        cin >> input;
        // getline(cin, input);
        //if you use cin>> after using getline
        // use cin.ignore(100,'\n');
        switch (input){
        case 'A': case 'a':
            //PROBLEM 1 START
             //  problem 1:
    //Declare Variables
    char number [4];
    //Input values
    cout <<"Enter 4 numbers: ";
    for(int i = 0; i <4; i++)
    {
        cin >> number[i];
    }
    
    for(int i = 0; i < 4; i++)
    {
        if ( isalpha( number[i]))
            cout<<'?';
        else
            for (int j = 0; j < number[i] - '0';j++)
                cout <<'*';
       cout <<endl;
        
    }
    //END PROB 1
            
            //PROBLEM 1 END
            break;
        case 'B': case 'b':
            //PROBLEM 2 START
            
            //PROBLEM 2 END
            break; 
        case 'C': case 'c':
            //PROB 3 START

            //PROB 3 END
            break;
        default:
            quit = true;
            break;
        }
    }while(quit==false);
    
    
    return 0;
}


/* 
  File:   Molina, Joshua-Project-1-40108
  Author: Joshua Molina
  Created on January , 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>//Input Output Library.
#include <iomanip>//Format Library.
#include <cstdlib>//Random Numbers.
#include <ctime>//Time to set the seed.
#include <fstream>//File stream Library.
#include <string>//String objects.
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    string user; //Name of user
    int firstChoice;//Number Entered to find info of Villa.
    char play_ag = 'y';//Loop for If in Villa.
    int i;//First dice roll game.
    int diceroll;//First dice roll game.
    unsigned char YRdice, sum;
    //Input values
    
    //Process by mapping inputs to outputs
    cout <<"Project 1 Game: Where Am I? \n";//Game Title
    cout <<" \n";
    cout <<"\t ???\n";//Design for Effect.
    cout <<"\t?   ?\n";
    cout <<"\t?   ?\n";
    cout <<"\t   ?\n";
    cout <<"\t  ?\n";
    cout <<"\t  ?\n";
    cout <<"\t  ?\n";
    cout <<" \n";
    cout <<"\t  ?\n";
    cout <<" \n";
    cout <<"A Game by Joshua Molina. \n";//Author of the game.
    cout <<" \n";
    cout <<"Press Enter To Continue.";
    cin.get();//User must respond to proceed
    cout <<" \n";
    //Some text to set the scene.
    cout <<"You awake in a dark room and you have no idea how you got there.  ";
    cout <<"Is this a dream? How did I get here? Have I gone INSANE!";
    cout <<"Your head is riddled with questions and no answers! You look down";
    cout <<" at your wrist and that a question mark has been branded on your ";
    cout <<"wrist.  Suddenly you hear large footsteps from outside the door. ";
    cout <<"The door has a a giant question mark on it.  In the exact same ";
    cout <<"font of the one on your wrist.  Who or what   is out there?  ?";
    cout <<"All that you know is that you need to find a way out and what ";
    cout <<"Question marks mean?";
    cout <<" \n";
    cout <<"Press Enter To Continue.";
    cin.get();
    cout <<" \n";
    cout <<"The footsteps approach the door but an alarm goes off that sounds";
    cout <<"like a car horn.  The footsteps hurry turn away and then more ";
    cout <<"footsteps pass the door.  You hear men walking and talking as well";
    cout <<" as what sounds to be grunting.  The men are talking about dinner.";
    cout <<" Then your stomach begins to growl.  Food sure does sound good ";
    cout <<"right now.  You think to yourself.  KNOCK! KNOCK! KNOCK! DINNER";
    cout <<" IS READY GET OUT HERE!!! someone yells.";
    cout <<" \n"<<endl;
    cout <<"Press enter to open the door.  Your hungry and have no choice!";
    cin.get();
    cout <<"You are greeted by a man in a navy jump suit with a question mark ";
    cout <<"that resembles all of the other question marks.\n";
    cout <<" \n";
    cout <<"Welcome to Villa, the man says.  You have been out for a week! ";
    cout <<"Im sorry where are my manners. My name is John.  I am your tour ";
    cout <<"guide even though there is not much to see.  Umm ok bad start you ";
    cout <<"probably have many questions. But first let me ask you a few.\n";
    cout <<" \n";
    cout <<"What is your name: ";
    getline(cin, user);
    cout <<" \n";
    cout <<"Hello "<<user<<"! Welcome to Villa a place of refuge and rest!\n";
    cout <<"Even though villa means a large and luxurious country residence ";
    cout <<"and this isn't exactly a place one would be happy to call home.  ";
    cout <<"We better get to the dinner hall before the trolls decide to get";
    cout <<" seconds and leave us without firsts.  Let's get going im starving";
    cout <<" and I don't want to try and win my dinner from these trolls I ";
    cout <<"swear they have fixed dice or something.  In this place you you ";
    cout <<"live by staying out of the way and living here forever or by ";
    cout <<"risking it all by playing the dice.  You risk loosing your rank ";
    cout <<"and staying here even longer! I had 2 years left in villa, till";
    cout <<"I got desperate and rolled the dice.  I lost to a troll and he";
    cout <<"lost 10 years from his sentence and I had to serve 10 more in his";
    cout <<" place.";
    cin.get();
    cout <<" \n";
    cout <<"Im sorry I just miss my daughter Mindy.  She was 4 the last time";
    cout <<"I saw her and I just want to get to her.  I hope she still ";
    cout <<"remembers her daddy."<<endl;
    cout <<"Press Enter to continue. \n";
    cin.get();
    cout <<" \n";
    cout <<"Every one has a story to tell around here and everyone has ";
    cout <<"questions the want answered but all we have are pieces and no one";
    cout <<"to put them together or figure out what this stupid question mark";
    cout <<"means!\n";
    cout <<"Do you have any questions? I only know a little bit about villa ";
    cout <<"So im not going to be much help but I will tell you what I know";
    cout <<" lets walk and talk while we go to dinner."<<endl;
    cout <<"Press Enter to continue. \n";
    cin.get();
    while (play_ag == 'y' || play_ag == 'Y')
    {
    cout <<"Quesitons you can ask to find an answer.\n"<<endl;
    cout <<"1.How did I get here ?"<<endl;
    cout <<"2.How do I get out?"<<endl;
    cout <<"3.What is this question mark?"<<endl;
    cout <<"4.End the conversation.";
    cout <<" \n";
    cout <<"Select the number to the question you would like answered.";
    cin >>firstChoice; 
    if(firstChoice == 1)
    {
        cout <<"No one really knows how they get here we all wake up in a room";
        cout <<" with the same questions and the same mark."<<endl;
    }
    else if(firstChoice == 2)
    {
        cout <<"We all have a time that we owe, or must serve while we are ";
        cout <<"here in this place."<<endl;
        cout <<"For some its shorter than others and time can be given to";
        cout <<" other people by playing the dice.  WHICH IS NOT A GOOD IDEA!";
        cout <<" I had to learn that the hard way."<<endl;
    }
    else if(firstChoice == 3)
    {
        cout <<"They call it the mark of villa.  I am not sure why but ";
        cout <<"that is what it is called.  You and everyone in here has";
        cout <<"the exact same question."<<endl;
    }

        cout <<" \n"<<endl;
        cout <<"Sorry that I cant answer more than that.  It is all of the";
        cout <<" information that I know so far.  But you can do some ";
        cout <<"exploring of your own to get some more answers and put";
        cout <<" all the pieces together.";
        cout <<"Press Enter to continue. \n"<<endl;
        cin.get();
    cout <<"Well here we are.  The dinner hall.  This is the only place";
    cout <<" where you will find every person together and not arguing";
    cout <<" for a change.  I guess food has that kind of power huh.";
    cout <<"GREAT! Yurba the troll is taking orders that means we wont";
    cout <<" get what we want.  The dice will decide what we eat.\n";

    YRdice = rand()%6+1;//[1,6]
    cout<<"You rolled a "<<static_cast<int>(YRdice)<<endl;
    }
    if (YRdice < 3)
    {
        cout <<"SCRAPS FOR DINNER!";
    }
    else if (YRdice > 4)
    {
        cout <<"LUCKY ROLL YOU GET SCRAPS!";
    }
   
        
    //Output values

    //Exit stage right!
    return 0;
}
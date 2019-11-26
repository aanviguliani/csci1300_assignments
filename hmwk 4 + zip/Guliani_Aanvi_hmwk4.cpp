//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Project 1
/*//declare functions
rollDice ()
humanTurn (int total)
computerTurn (int total)
game()

//declare global variable for turn
humanTotal
computerTotal

main()
{
    game()
}

game()
{
    //declare variables used in game
    string userInput
    int humanTurnTotal
    int computerTurnTotal


    //call function to display greeting
    welcome()

    //user turn
    print “It is now human’s turn”
    print “ Do you want to roll a dice (Y/N?”

    while (isGame is true or humanTotal is less than 100 and computerTotal is less than 100)
    {
    	output “It is now human’s turn”
    	output” Do you want to roll a dice (Y/N)?”
    	input (userInput)

    	humanTurnTotal = 0
    	computerTurnTotal = 0

    	isTurn is true
	    
	    if (userInput is “Y” or “y”)
	    {
		set user to “You”
		call function roll with parameter user
		
		    if roll returned 0
		    {
			    //reset humanTurnTotal
			    humanTotal = humanTotal - humanTurnTotal

			    output(computerTotal)
			    output(humanTotal)
			
			    if(computer or human reaches 100) 
				    break

			    output(“It is now computer’s turn”)
			    humanTurnTotal = 0
	    	}

		    else if roll returned 15
		    {
			    //reset humanTurnTotal
			    humanTotal = humanTotal - humanTurnTotal

			    output(computerTotal)
			    output(humanTotal)

                if(computer or human reaches 100) 
				    break

			    output(“It is now computer’s turn”)
			    humanTurnTotal = 0
		    }

		    else
		    {
			    humanTurnTotal = humanTurnTotal + roll
			    output(humanTurnTotal)
		    }

	    	if roll returned 0 or roll returned 15
	    	{
			    while computerTurnTotal is less than 10
			    {
				    if roll returned 15
				    {
				        //reset computerTotal
                        computerTotal = computerTurnTotal - computerTurnTotal
                        computerTotal = computerTotal + 15
                        computerTurnTotal = 15
                        output(computerTurnTotal)
                        break
				    }
				
				    else if roll returned 0
				    {
				        //reset computertotal
				        computerTotal = computerTurnTotal - computerTurnTotal
                        computerTotal = computerTotal + 15
                        computerTurnTotal = 0;
                        output(computerTurnTotal)
                        break
				    }

				computerTurnTotal = computerTurnTotal + roll
				output(computerTurnTotal)
				computerTotal = computerTotal + roll


				output(computerTotal)
				output(humanTotal)
			}
		}

			if user is set to “You”
			{
				output(“Do you want to roll again?)
				input(userInput)

				if userInput is “Y” or “y”{
					//go back to human Turn
					isTurn is true}

				else
				{
					//go to computer Turn
                    isTurn is false
				}
			}
			
			else
			 {
			    //go back to computer Turn
				isTurn is false
			 }
	}

	if userInput is “N” or “N”
	{
		output(computerTotal)
		output(humanTotal)
		
		break if human or computer reaches 100

		output(It is now computer’s turn)

        while computerTurnTotal is less than 10
			{
				set user to “Computer”
				call function roll(user)

				if roll returned 15
				{
				    //reset computerTotal
                     computerTotal = computerTurnTotal - computerTurnTotal
                    computerTotal = computerTotal + 15
                    computerTurnTotal = 15
                    output(computerTurnTotal)
    b               reak
				}
				
				else if roll returned 0
				{
				    //reset computertotal
				    computerTotal = computerTurnTotal - computerTurnTotal
                    computerTotal = computerTotal + 15
                    computerTurnTotal = 0;
                    output(computerTurnTotal)
                    break
				}

				computerTurnTotal = computerTurnTotal + roll
				output(computerTurnTotal)
				computerTotal = computerTotal + roll


				output(computerTotal)
				output(humanTotal)
			}
		
		if computer or human reaches 100
			break
	}

}

if humanTotal is greater than computerTotal
output(human wins)

if computerTotal is greater than humanTotal
	output(computer wins)

}

void welcome()
{
output(Welcome to Jeopardy Dice!)
}

rollDice()
{
	return random() % 6 + 1
}

turn(string user)
{	
	roll = rollDice()
	if roll equals 1 or 6
{
		output(roll)
		return 0
	}

	if roll equals 3
	{
		output(roll)
		return 15
	}
	
	output(roll)
	return roll
}
*/


#include <string>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <iostream>
#include <stdio.h>

using namespace std;

//declare functions
void welcome();
int turn(string user);
void game();

//function that returns random number between 1 and 6 (given)
int rollDice()
{
    return random() % 6 + 1;
}

//function that returns turn total value based on roll
int turn(string user)
{
    //declare variable for roll
    int roll = rollDice();
    if(roll == 1 || roll == 6)
    {
        cout<<user + " rolled a "<<roll<<endl;
        //return turn total of 0 if user rolled 1 or 6
        return 0;

    }
    if(roll == 3)
    {
        //return turn total of 15 if user rolled 3
        cout<<user + " rolled a "<<roll<<endl;
        return 15;
    }
    
    //else just return roll
    cout<<user + " rolled a "<<roll<<endl;
    return roll;

}

void game()
{
    welcome();
    //alternate turns until humanTotal or computerTotal > 100
    //if one player reaches a 100 points, end the game and exit game while loop

    //declare variables for human total, computer total, turn totals, and roll
    int humanTotal = 0;
    int computerTotal = 0;
    int humanTurnTotal;
    int computerTurnTotal;
    int roll;
    
    //boolean to check and see if output is asking to roll a dice (first iteration) or if they want to roll again (all subsequent iterations)
    bool isTurn = true;
    
    //declare string variables for user and userInput
    string user;
    string userinput;

    //iterate through this block of code while human total and computer total is less than 0
    while(humanTotal < 100 && computerTotal < 100)

    {
        //first display
        cout << "It is now human's turn" << endl;
        cout << endl;

        //take user input
        cout<<"Do you want to roll a dice (Y/N)?:"<<endl;
        cin >> userinput;

        //reset human turn total and computer turn total to 0
        humanTurnTotal = 0;
        computerTurnTotal = 0;

        //is turn is true because this is the first display when it is human's turn
        isTurn = true;

        //do human turn if user input is y or Y
        if(userinput == "Y" || userinput == "y")
        {
            while(isTurn)
            {
                user = "You";
                roll = turn(user); //call function roll

                if(roll == 0)
                {
                    humanTotal = (humanTotal - humanTurnTotal); //reset humanTotal back to previous total so it doesn't add 1 or 6
                    humanTurnTotal = 0; //set new value for human turn total
                    cout<<"Your turn total is "<<humanTurnTotal<<endl; // display human turn total
                    humanTotal = humanTotal + humanTurnTotal; //recalculate human Total with new value of human turn total

                    //display score
                    cout << "computer: " << computerTotal << endl;
                    cout << "human: " << humanTotal << endl;
                    cout << endl;
                    
                    //break if human or computer reaches 100
                    if(computerTotal > 100 || humanTotal > 100){
                        break;
                    }

                    //go to computer turn and set human turn total to 0
                    cout << "It is now computer's turn" << endl;
                    humanTurnTotal = 0;
                    cout << endl;

                } 
                
                else if(roll == 15) 
                {
                    humanTotal = (humanTotal - humanTurnTotal);//reset humanTotal back to previous total so it doesn't add 3
                    humanTurnTotal = 15; //set new human turn total
                    cout<<"Your turn total is "<<humanTurnTotal<<endl; //display turn total
                    humanTotal = humanTotal + humanTurnTotal; //recalculate human Total with new value of human turn total

                    //display score
                    cout << "computer: " << computerTotal << endl;
                    cout << "human: " << humanTotal << endl;
                    cout << endl;
                    
                    //break if human or computer reaches 100
                    if(computerTotal > 100 || humanTotal > 100)
                    {
                        break;
                    }

                    //go to comptuer turn and reset human turn total to 0
                    cout << "It is now computer's turn" << endl;
                    humanTurnTotal = 0;
                    cout << endl;
                } 
                
                else //if roll was not 1,6, or 3, calculate human turn total and human total normally and display turn total
                {
                    humanTurnTotal = humanTurnTotal + roll;
                    cout<<"Your turn total is "<<humanTurnTotal<<endl;
                    humanTotal = humanTotal + roll;

                }

                //go to computer turn if human rolled 1,6,or 3 and turn ended
                if(roll == 0 || roll == 15)
                {
                    //while loop to make sure computerTurnTotal doesn't exceed 10
                    while (computerTurnTotal < 10) {

                        //set user to computer and call function turn
                        user = "Computer";
                        roll = turn(user);

                        if (roll == 15) {
                            computerTotal = (computerTotal - computerTurnTotal) ; //reset computerTotal back to previous total so it doesn't add 3
                            computerTotal = computerTotal + 15; // recalculate new computer total
                            cout << "Computer turn total is " <<15<< endl; // display turn total
                            computerTurnTotal = 15; //set turn total to 15
                            break; //end turn
                        } 
                        
                        else if (roll == 0) {
                            computerTotal = (computerTotal - computerTurnTotal);//reset computerTotal back to previous total so it doesn't add 1 or 6
                            computerTurnTotal = 0; // set turn total to 0
                            computerTotal = computerTotal + computerTurnTotal; // recalculate new computer total
                            cout << "Computer turn total is " << computerTurnTotal << endl; //display turn total
                            break; // end turn
                        }
                        
                        //if user did not roll 1,3,6, calculate computer turn total and computer total normally and display turn total
                        computerTurnTotal = computerTurnTotal + roll; 
                        cout << "Computer turn total is " << computerTurnTotal << endl;
                        computerTotal = computerTotal + roll;
                    } 

                    //display score
                    cout << "computer: " << computerTotal << endl;
                    cout << "human: " << humanTotal << endl;
                    
                    //break if computer or human reaches 100
                    if(computerTotal > 100 || humanTotal > 100){
                        break;
                    }
                    cout << endl;
                }

                //if user is you, display do you want to roll again instead of do you want to roll a dice
                if(user == "You")
                {
                    cout<<"Do you want to roll again (Y/N)?:"<<endl;
                    cin >> userinput;

                    if(userinput == "Y" || userinput == "y")
                    {
                        //set is turn to true and go back to while loop to keep iterating through human turn
                        isTurn = true;

                    }
                    else
                    {
                        //set is turn to false and go to computer turn
                        isTurn = false;
                    }
                }
                else
                {
                    //is turn is false and go to computer turn
                    isTurn = false;
                }
            }
        }


        //if user input is n or N, do computer turn
        if(userinput == "N" || userinput == "n") //computer turn
        {
            
            //display score
            cout<<"computer: "<<computerTotal<<endl;
            cout<<"human: "<<humanTotal<<endl;
            
            //break if human or computer reaches 100
            if(computerTotal > 100 || humanTotal > 100){
                break;
            }
            cout << endl;

            //go to computer turn
            cout<<"It is now computer's turn"<<endl;
            cout << endl;

            while(computerTurnTotal < 10){

                //set user to computer and call function turn
                user = "Computer";
                roll = turn(user);
                
                //do computer turn
                if (roll == 15) {
                    computerTotal = (computerTotal - computerTurnTotal) ;
                    computerTotal = computerTotal + 15;
                    cout << "Computer turn total is " <<15<< endl;
                    computerTurnTotal = 15;
                    break;
                } else if (roll == 0) {
                    computerTotal = (computerTotal - computerTurnTotal);
                    computerTurnTotal = 0;
                    computerTotal = computerTotal + computerTurnTotal;
                    cout << "Computer turn total is " << computerTurnTotal << endl;
                    break;
                }
                computerTurnTotal = computerTurnTotal + roll;
                cout << "Computer turn total is " << computerTurnTotal << endl;
                computerTotal = computerTotal + roll;

            }

            //display score
            cout<<"computer: "<<computerTotal<<endl;
            cout<<"human: "<<humanTotal<<endl;
            cout << endl;
            
            //break if computer total or human total reaches 100
            if(computerTotal > 100 || humanTotal > 100){
                break;
            }

        }

    }


    //display that human won if human total is greater than computer total
    if(humanTotal > computerTotal)
    {
        cout<<"Congratulations! human won this round of jeopardy dice!"<<endl;
    }


    //display that computer won if computer total is greater than human total
    if(computerTotal > humanTotal)
    {
        cout<<"Congratulations! computer won this round of jeopardy dice!"<<endl;
    }

}


//first display message
void welcome ()
{
    cout << "Welcome to Jeopardy Dice! " << endl;
    cout << endl;
}

//main method to call game
int main()
{
  game();
}
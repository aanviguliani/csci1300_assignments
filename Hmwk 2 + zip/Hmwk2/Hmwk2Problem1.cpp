//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 2 - Problem # 1

#include <iostream>
using namespace std;

//create function called convertSeconds
int convertSeconds(int seconds)
{
  
    //formula to convert seconds to hours
    int hours = seconds / 3600;
    
    //take remainder of hours and convert it to minutes
    int minutes = (seconds % 3600) / 60;
    
    //take remainder of minutes and convert it back to seconds
    int newSeconds = (seconds % 3600) % 60;
    
    cout << hours << " hour(s) " << minutes << "  minute(s) " << newSeconds << " second(s) " << endl;


}

//main method to call function
int main()
{
    //test case 1
    convertSeconds(3671);
    
    //test case 2
    convertSeconds(1);
    
}
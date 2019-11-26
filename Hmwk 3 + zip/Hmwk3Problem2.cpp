//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 3 - Problem # 2

#include <iostream>
using namespace std;


int countDigits(int number)
{
    //declare variable for number of digits
    int numDigits;
    
    //first make all numbers positive via an if else statement
    //if the number is negative, multiply it by -1 to make it positive
    if (number < 0)
    {
        number = number * -1;
    }
    
    //now start counting how many digits there are
    
    if (number >= 0 && number <10)
    {
        //if the number is between 0 and 9, set the number of digits to 1
        numDigits = 1; 
    }
    
    else if (number >=10 && number < 100)
    {
        //if number is between 10 and 99, set number of digits to 2
        numDigits = 2;
    }
    
    else
    {
        //assuming that all digits are between -1000 and 1000, all digits that are not between 0 and 9 or 10 and 99 will be 3 digits
        //set numDigits to 3 for all other cases
        numDigits = 3;
    }
    
    //return statement for function
    return numDigits;
}

int main()
{
   //test case to see if negative integers work
    cout << countDigits(-1) << endl;
    
    //test case for one digit
    cout << countDigits(1) << endl;
    
    //test case for two digits
    cout << countDigits(16) << endl;
    
    //test case for three digits
    cout << countDigits(876) << endl;
    
       
}
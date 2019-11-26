//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 3 - Problem # 1

#include <iostream>
using namespace std;

//create function called collatzStep
int collatzStep(int n)
{
    int output;
    
    //set of if else statements
    
    if (n < 0)
    {
        //says that if the integer is less than 0 set output to 0
        output = 0;
    }
    
    else if (n % 2 == 0)
    {
        //says that if the integer is divisible by 2 (even) then set output to n divided by 2
        output = n / 2;
    }
    
    else
    {
        //says that if number is not even or less than 0 (essentially if n is odd) set output to 3n + 1
        output = (3 * n) + 1;
    }
    
    return output;
    
}

int main()
{
    //test case 1
    cout << collatzStep(0) << endl;
    
    //test case 2
    cout << collatzStep(-1) << endl;
    
    //test case 3
    cout << collatzStep(4) << endl;
    
    //test case 4
    cout << collatzStep(1) << endl;
    
}
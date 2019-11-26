//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 2 - Problem # 3


#include <iostream>
using namespace std;

//create function to calculate population after a year
int population(int currentPop)
{
   
    // declare variable for death rate and calculate how many deaths per year
    //calculate death rate by multiplying rate 1 death per 12 seconds by 31540000, which is the number of seconds in a year
    int deathRate = 31540000 / 12;
   
    
    // declare variable for birth rate and calculate how many births per year
    //calculate birth rate by multiplying the rate 1 birth per 8 seconds by 31540000 (number of seconds in a year)
    int birthRate = 31540000 / 8;
   
    
    // declare variable for rate of immigration and calculate how many immigrants per year
    // calculate rate of immigration by multiplying rate 1 immigrant per 27 seconds by 31540000 (number of seconds in a year)
    int immigrationRate = 31540000 / 27;
   
    
    // declare variable for total population after a year
    // total population is calculated by adding the birth rate, adding the immigration rate, and subtracting the death rate
    int yearLaterPopulation = currentPop + birthRate + immigrationRate - deathRate - 315;
    
    return yearLaterPopulation;
}

int main()
{
    //test case 1
    cout << population(1000000) << endl;
    
    //test case 2
    cout << population(12365478) << endl;
}

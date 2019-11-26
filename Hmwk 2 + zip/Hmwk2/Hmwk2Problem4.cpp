//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 2 - Problem # 4

#include <iostream>
#include <cmath>
using namespace std;

//function that calculates luminosity
int luminosity(double brightness, double distance)
{
    //formula to calculate luminosity using brightness and distance arguments
    int calculatedLuminosity = int (4 * 3.14159 * brightness * pow(distance,2));
    
    //return luminosity value for function
    return calculatedLuminosity;
}

int main()
{
    //test case 1
    cout << luminosity(1.5,17.8) << endl;
    
    //test case 2
    cout << luminosity(1.2,15.4) << endl;
}
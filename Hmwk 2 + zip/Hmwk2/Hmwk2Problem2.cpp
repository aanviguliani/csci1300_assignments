//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 2 - Problem # 2

#include <iostream>
#include <iomanip>
using namespace std;

void celsiusToFahrenheit(int tempInCelsius)
{
   //formula to convert celsius to fahrenheit
    float fahrenheit = (((double)tempInCelsius * 9) / 5) + 32;
    
    //display conversion
    cout << "The temperature of "<< tempInCelsius << " in fahrenheit is " << std::setprecision(2) << std::fixed << fahrenheit << endl;
}

int main()
{
    //test case 1
    celsiusToFahrenheit(38);
    
    //test case 2
    celsiusToFahrenheit(45);
}
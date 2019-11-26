//Author: Aanvi Guliani - CSCI 1300 Fall 2018
//Recitation: 101 - Gabriel Andrade
//Homework: 3 - Problem # 3

#include <iostream>
using namespace std;

int daysofMonth(int month)
{
    
    switch(month)
    {
        //switch case that prints number of days depending on the month
        case 1: cout << "Month " << month  << " has 31 days" << endl; break;
        case 2: cout << "Month " << month  << " has 28 (or 29) days" << endl; break;
        case 3: cout << "Month " << month  << " has 31 days" << endl; break;
        case 4: cout << "Month " << month  << " has 30 days" << endl; break;
        case 5: cout << "Month " << month  << " has 31 days" << endl; break;
        case 6: cout << "Month " << month  << " has 30 days" << endl; break;
        case 7: cout << "Month " << month  << " has 31 days" << endl; break;
        case 8: cout << "Month " << month  << " has 31 days" << endl; break;
        case 9: cout << "Month " << month  << " has 30 days" << endl; break;
        case 10: cout << "Month " << month  << " has 31 days" << endl; break;
        case 11: cout << "Month " << month  << " has 30 days" << endl; break;
        case 12: cout << "Month " << month  << " has 31 days" << endl; break;
        
        //unless the digit entered is between 1 and 12, the switch case will default to the error message
        default: cout << "Invalid month number" << endl; break;
    }
}

int main()
{
    //test case 1
    daysofMonth(2);
    
    //test case 2
    daysofMonth(7);
    
    
    //test case 3
    daysofMonth(12);
    
    //test case 4
    daysofMonth(13);
    
    
}
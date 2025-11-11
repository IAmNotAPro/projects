/******************************************************************************
Fall 2024 Programming Foundations I
Author: Grant Carmichael
Date: November 10 2024
Purpose: Starter main program for the Horoscope Project
*******************************************************************************/

#include "horoscope.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Horoscope Program!" << endl;
    cout << "Let's see what your day might be like..." << endl << endl;

    string name;
    int month = 0;
    int day = 0;

    // -------------------------------------------------
    // TODO #1: Prompt the user for their name, birth month, and birth day
    // Include error handling:
    //   • Ask the user to enter their name
    //   • Ask for birth month (1–12) and re-prompt if invalid
    //   • Ask for birth day (1–31) and re-prompt if invalid
    // -------------------------------------------------
    cout << "Hello. Please input your name: ";
    cin >> name;
    cout << "Please enter your birth month (1-12): ";
    cin >> month;
    while (month < 1 || month > 12){
        cout << "Invalid input, please enter your birth month (1-12): ";
        cin >> month;
    }
    cout << "Please enter your birth day (1-31): ";
    cin >> day;
    while (day < 1 || day > 31){
        cout << "Invalid input, please enter your birth day (1-31): ";
        cin >> day;
    }
    cout << "Hello " << name << " let's check your horoscope!";


    // -------------------------------------------------
    // Create a Horoscope object using the constructor
    // -------------------------------------------------
    Horoscope h1(month, day);

    // -------------------------------------------------
    // TODO #2: Use the setter function to set the user’s name
    // Then use the getter to confirm and display it on the screen
    // -------------------------------------------------
    h1.setName(name);
    h1.getName();

    cout << "Horoscope for " << h1.getName() << "!";

    // -------------------------------------------------
    // TODO #3: Call the member functions to
    //   (a) determine the zodiac sign
    //   (b) load horoscope messages from the files
    //   (c) display the complete horoscope
    // -------------------------------------------------
    h1.determineSign();
    h1.loadMessages();
    h1.displayHoroscope();

    // -------------------------------------------------
    // TODO #4: Demonstrate the copy constructor
    // (a)  Create a new object (h2) as a copy of h1
    // (b)  Call the displayHoroscope() function using that 
    // -------------------------------------------------
    Horoscope h2(h1);
    h2.displayHoroscope();

    return 0;
}

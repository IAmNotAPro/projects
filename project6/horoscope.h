/******************************************************************************
Fall 2024 Programming Foundations I
Author: Grant Carmichael
Date: November 10, 2024
Purpose: Define the Horoscope class
*******************************************************************************/

#ifndef HOROSCOPE_H
#define HOROSCOPE_H

#include <iostream>
#include <string>
using namespace std;

class Horoscope
{
private:
    string name;
    int month;
    int day;
    string sign;
    string love;
    string career;
    string health;

public:
    // TODO: Declare Constructors
    // a. default Constructor DONE
    // b. parameterized (month, day) Constructor DONE
    // c. copy Constructor DONE

    Horoscope();

    Horoscope(int m, int d);

    Horoscope(const Horoscope &other); // Copy constructor

    ~Horoscope();

    void setName(const string& n);
    const string& getName() const;

    void determineSign();
    void loadMessages();
    void displayHoroscope() const;
};

#endif

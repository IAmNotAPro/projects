/******************************************************************************
Fall 2024 Programming Foundations I
Author: Grant Carmichael
Date: November 10, 2024
Purpose: Implement the Horoscope class
*******************************************************************************/

#include "horoscope.h"
#include <fstream>
using namespace std;

// -------------------------------------------------
// Name: Horoscope
// Parameters: none
// Returns: none
// Purpose: Constructor. Initializes member variables.
// -------------------------------------------------
Horoscope::Horoscope()
{
    name = "";
    month = 0;
    day = 0;
    sign = "";
    love = "";
    career = "";
    health = "";
}

// -------------------------------------------------
// TODO
// Name: Horoscope
// Parameters: m (int), d (int)
// Returns: none
// Purpose: Constructor. Initializes member variables to parameters.
// -------------------------------------------------
Horoscope::Horoscope(int m, int d){
    month = m;
    day = d;
}


// -------------------------------------------------
// Name: Horoscope
// Parameters: other (Horoscope object)
// Returns: none
// Purpose: Copy constructor. Initializes member variables to other Horoscope’s variables.
// -------------------------------------------------
Horoscope::Horoscope(const Horoscope &other)
{
    name = other.name;
    month = other.month;
    day = other.day;
    sign = other.sign;
    love = other.love;
    career = other.career;
    health = other.health;
    
}


// -------------------------------------------------
// TODO:
// Name: ~Horoscope
// Parameters: none
// Returns: none
// Purpose: Destructor. Deallocates memory.
// -------------------------------------------------
Horoscope::~Horoscope() = default;


// -------------------------------------------------
// TODO:
// Name: setName
// Parameters: n (string)
// Returns: none
// Purpose: Sets the user’s name using the setter function.
// -------------------------------------------------
void Horoscope::setName(const string& n){
    name = n;
}
// -------------------------------------------------
// TODO:
// Name: getName
// Parameters: none
// Returns: string, the user’s name
// Purpose: Returns the stored name using the getter function.
// -------------------------------------------------
const string& Horoscope::getName()const {
    return name;
}
// -------------------------------------------------
// Name: determineSign
// Parameters: none
// Returns: none
// Purpose: Determines the zodiac sign based on birth month and day.
// -------------------------------------------------
void Horoscope::determineSign()
{
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        sign = "Aries";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        sign = "Taurus";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        sign = "Gemini";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        sign = "Cancer";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        sign = "Leo";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        sign = "Virgo";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        sign = "Libra";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        sign = "Scorpio";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        sign = "Sagittarius";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        sign = "Capricorn";
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        sign = "Aquarius";
    else
        sign = "Pisces";
}

// -------------------------------------------------
// TODO:
// Name: loadMessages
// Parameters: none
// Returns: none
// Purpose: Loads one message from each file (love.txt, career.txt, health.txt).
// -------------------------------------------------
void Horoscope::loadMessages()
{
    
    int index = 0;
    // TODO: Calculate an index between 0–9 using date and month
    string line;
    int count = 0;

    // Unsure on how to do this -- figure out later
    if (month > 9){
        month -= 4;
        index = month;
        if (day % 2 == 0 && index < 7){
            index += 3;
        } else if (day % 2 == 0 && index > 8) {
            index += 2;
        } else if (day % 2 == 1){
            index += 1;
        }
    }
    else {
        index = month;
        if (day % 2 == 0 && index < 7){
            index += 3;
        } else if (day % 2 == 0 && index < 8) {
            index += 2;
        } else if (day % 2 == 1 && index < 9) {
            index += 1;
        } else {
        }
    }

    cout << index;


   // TODO: Create an ifstream object and open the "love.txt" file for reading.`
    ifstream loveTxt("love.txt");

    // Read love.txt
    while (getline(loveTxt, line))
    {
        if (count == index)
        {
            love = line;
            break;
        }
        count++;
    }
    loveTxt.close();

    // TODO: Open and Read message from career.txt 
    ifstream careerTxt("career.txt");
    count = 0;

    while (getline(careerTxt, line))
    {
        if (count == index)
        {
            career = line;
            break;
        }
        count++;
    }
    careerTxt.close();
    // TODO: Open and Read message from health.txt
    ifstream healthTxt("health.txt");
    count = 0;
    
    while (getline(healthTxt, line))
    {
        if (count == index)
        {
            health = line;
            break;
        }
        count++;
    }
    healthTxt.close();
}

// -------------------------------------------------
// Name: displayHoroscope
// Parameters: none
// Returns: none
// Purpose: Displays the horoscope information to the screen.
// -------------------------------------------------
void Horoscope::displayHoroscope() const
{
    //TODO: Display the Horoscope messages
    cout << love << endl;
    cout << career << endl;
    cout << health << endl;
}

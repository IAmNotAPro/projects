#include <iostream>
using namespace std;

int maj;
string calculusYN;
string digdesignYN;

int main(){
    cout << "Select your major\n" << " 1. Electrical Engineering (EE)\n" << " 2. Computer Science (CS)\n" << " 3. Computer Engineering (CE)\n";
    cout << "- - - - - - - - - - - - - - - -\n";

    cout << "Input your choice (1-3): ";
    cin >> maj;

    if (maj>3 || maj<1){ // If the user inputs something not in the range of 1-3 program quits
        cout << "Invalid input";
        return 0;
    }

    cout << "Have you taken calculus 1? (Y/N): "; // Basic Input handling
    cin >> calculusYN;

    switch (maj){ // Switch statement for calculus I logic - if not taken program doesn't take another input
        
        case 1: // Electrical Engineering
            if(calculusYN == "Y"){
                break;
            } else if (calculusYN == "N") {
                cout << "\nYou should take Calculus I";
                return 0;
            }
        case 2: // Computer Science
            if(calculusYN == "Y"){
                break;
            } else if (calculusYN == "N") {
                cout << "\nYou should take Calculus I";
                return 0;
            }
        case 3: // Computer Engineering
            if(calculusYN == "Y"){
                break;
            } else if (calculusYN == "N") {
                cout << "\nYou should take Calculus I";
                return 0;
            }
        default: 
            break;

    }

    cout << "Have you taken Digital Design? (Y/N): ";
    cin >> digdesignYN;

    cout << "\n--- Advising ---";

    switch (maj){

        case 1: // Electrical Engineering
            if(digdesignYN == "Y"){
                cout << "\nYou should take Calculus II and Physics.";
            }
            else if(digdesignYN == "N"){
                cout << "\nYou should take Calculus II and Physics.";
                cout << "\nYou should take Digital Design.";
            }
            else { // If user inputs anything besides Y/N 
                cout << "\nInvalid inputs";
            }
            break;

        case 2: // Computer Science
            if(digdesignYN == "Y"){
                cout << "\nYou should take Calculus II and Programming Foundations I.";
            }
            else if(digdesignYN == "N"){
                cout << "\nYou should take Calculus II and Programming Foundations I.";
                cout << "\nYou should take Digital Design.";
            }
            else { // If user inputs anything besides Y/N 
                cout << "\nInvalid inputs";
            }
            break;

        case 3: // Computer Engineering
            if(digdesignYN == "Y"){
                cout << "\nYou should take Calculus II and Discrete Math.";
            }
            else if(digdesignYN == "N"){
                cout << "\nYou should take Calculus II and Discrete Math.";
                cout << "\nYou should take Digital Design.";
            }
            else { // If user inputs anything besides Y/N 
                cout << "\nInvalid inputs";
            }
            break;
    default:
        break;
        }
}   
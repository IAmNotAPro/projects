/*
    Project 3
    Grant Carmichael 
    CSCE 20004-001
*/

#include <iostream>
using namespace std;

int shapeChoice;
int shapeSize; // Defines 

int main(){

    cout << "Choose what to draw: " << endl; // Inital input prompt
    cout << "1. Triangle" << endl << "2. Diamond" << endl << "3. Checkerboard" << endl << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> shapeChoice;

    switch(shapeChoice){

        case 1: // Triangle

            cout << "Enter the size of the triangle (positive number): ";
            cin >> shapeSize;
            if (shapeSize > 0){ // Checks for positive input
                for (int i = 1; i <= shapeSize; i++ ){
                    for (int j = 1; j <= i; j++){
                        cout << "* ";
                    }
                    cout << endl;
                }
            }else {
                cout << "Invalid input\n";
                return 0;
            }

            return 0;

        case 2: // Diamond

            cout << "Enter the size of the Diamond (positive number): ";
            cin >> shapeSize;
            if (shapeSize > 0){ // Positive input
                for (int i = 1; i <= shapeSize; i++){ // Top half of diamond

                    for (int spaces = 1; spaces <= shapeSize - i; spaces++){ // Leading spaces
                        cout << " ";
                    }

                    for (int j = 1; j <= i; j++){ // Printing stars
                        cout << "* ";
                    }

                    cout << endl;
                }

                for (int i= shapeSize-1; i >= 1; i--){ // Bottom half of diamond

                    for (int spaces = 1; spaces <= shapeSize - i; spaces++){ // Leading spaces
                        cout << " ";
                        }
                    for (int j=1; j<= i; j++){ // Printing stars
                        cout << "* ";
                        }
                    cout << endl;
                }
            } else {
                cout << "Invalid input\n";
                return 0;
            }

            return 0;

        case 3: // Checkerboard

            cout << "Enter the size of the Checkerboard (positive number): ";
            cin >> shapeSize;

            if (shapeSize > 0){ // Positive input
                for (int i = 1; i <= shapeSize; i++){ // Main loop

                    if (i % 2 == 1){ // For odd values
                        
                        for (int j = 1; j <= shapeSize; j++){
                            if (j % 2 == 1){
                                cout << "* ";              
                            } else if (j % 2 == 0){ // If remainder is 1, odd spot. If 0, even spot.
                                cout << ". ";
                            }
                        }
                        cout << endl;
                    }
                    if (i % 2 == 0){ // For even values

                        for (int j = 1; j <= shapeSize; j++){

                            if (j % 2 == 1){
                                cout << ". "; 
                            } else if (j % 2 == 0){ // If remainder is 1, odd spot. If 0, even spot
                                cout << "* ";
                            }
                        }
                        cout << endl;
                    }
                }
            }
            else {
                cout << "Invalid input\n";
                return 0;
            }
            
            return 0;

        case 4: // Exit
            cout << "Exiting\n";
            return 0;

        default: // Any other input
            cout << "Invalid input\n";
            return 0;

    }

    return 0;
}
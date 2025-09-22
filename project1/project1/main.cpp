/*
* Name: Grant Carmichael
* Project One
*
* This program converts a receipe to the amount of servings the
* user needs
*/

#include <iostream>
using namespace std;

int main()
{
    float startServings; // Inital servings
    float scaleServings; // Servings wanted to scale to
    float ingredientCost; // How much ingredients cost
    float costPerServing; // ingredientCost divided by costPerServing, makes calculation easier
    float scale; // For final output, startServings divided by scaleServings
    
    // Inital text for beginning of program
    cout << "Congrats on getting hired as chef! Let's work on scaling\nyour American recipes to metric measurements and ingredient costs\nfor different serving sizes. " << endl;
    cout << "\nWelcome to the Recipe Scaling Program!" << endl;
    cout << "Please enter the following details:\n" << endl;
    
    // Scaling servings
    cout << "How many servings does your receipe make? ";
    cin >> startServings; // User input for initial servings
    
    cout << "How many servings do you want to scale it to? ";
    cin >> scaleServings; // User input for servings wanted to scale to
    scale = scaleServings/startServings; // What the user needs to multiply the recipe by to get finalized servings amount (scale)
    
    // Cost configuration/calculations
    cout << "What is the current cost for your ingredients in USD? ";
    cin >> ingredientCost;
    costPerServing = ingredientCost/startServings; // Defines how much each serving costs, makes conversion much easier
    cout << "Cost per serving in USD: $" << costPerServing << endl;
    cout << "Cost per serving in EUR: €" << costPerServing * 0.85 << endl; // Euro conversion
    
    // Final instructions
    cout << "To scale your recipe from " << startServings << " servings to " << scaleServings << " servings, you will need to multiply";
    cout << " each ingredient by: " << scale << "."  << endl << "Now, let's get cooking!" << endl;
    
    return 0;
}

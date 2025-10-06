/*
CSC134
M2HW3 - Gold
SethG
10/05/2025
This program will do calculations for a pizza party
*/


#include <iostream>
#include <iomanip> //2 Decimal places
using namespace std;

int main()

{

    double Number_of_pizzas, Slices_per_pizza, Number_of_people;

    cout << "How many pizzas would you like to order?" << endl;
    cout << "Number of pizzas: ";
    cin >> Number_of_pizzas;
    
    cout << "How many slices would you like for each pizza?" << endl;
    cout << "***NOTICE!***" << endl;
    cout << "Recommended minimum # of slices are 8 and recommended maximum # of slices are 16" << endl;
    cout << "Number of slices: ";
    cin >> Slices_per_pizza;

    cout << "How many people will this be for?" << endl;
    cout << "Number of people: ";
    cin >> Number_of_people;

    //Calculations
    double Total_number_of_slices, Needed_slices, Leftover_slices;
    Total_number_of_slices = Number_of_pizzas * Slices_per_pizza;
    Needed_slices = Number_of_people * 3;
    Leftover_slices = Total_number_of_slices - Needed_slices;

    if (Leftover_slices >= 0) {
        cout << "There will be " << Leftover_slices;
        cout << " slices of pizza left over with this amount of pizzas." << endl;
    }
    else {
        cout << "There will be negative leftover slices." << endl;
        cout << "Please redo data input." << endl;
    }

    return 0;

}
/*
CSC134
M2Lab1 for CSC 134 online class
SethG
10/04/2025
This program will do claculations for Gener Crates, Inc.
*/

//General Crates, Inc. will use this to calculate
//volume, cost, customer charge, and profit for each crate of any size.
//Calculations will be made with data from user input.
//User input - dimensions of the crate.

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

    //Constants for cost and amount charged
    const double Cost_per_cubic_foot = 0.23;
    const double Charge_per_cubic_foot = 0.5;

    //Variables
    double Length, // Length of crate
    Width, // Width of crate
    Height, // Height of crate
    Volume, // Volume of crate
    Cost, // Cost to build crate
    Charge, // The charge for the crate
    Profit; // Profit made from the crate

    // Set desired number output formatting.
    cout << setprecision(2) << fixed << showpoint; // 2 decimal places

    // This will prompt user for the crate's dimensions.
    // Length, Width, and Height
    cout << "Please enter the desired dimensions of the crate." << endl;
    cout << "**NOTICE!** Input must be (in Feet):\n" << endl;
    cout << "Length: ";
    cin >> Length;
    cout << "Width: ";
    cin >> Width;
    cout << "Height: ";
    cin >> Height;

    // Calculate crate volume, production cost, customer charge, and total profit.
    Volume = Length * Width * Height;
    Cost = Volume * Cost_per_cubic_foot;
    Charge = Volume * Charge_per_cubic_foot;
    Profit = Charge - Cost;

    // Display the calculated data
    cout << "The total volume of the crate: ";
    cout << Volume << " cubic feet.\n";
    cout << "Cost to build: $" << Cost << endl;
    cout << "Charge to customer: $" << Charge << endl;
    cout << "Total profit: $" << Profit << endl;

    
    return 0;

}
/*
CSC134
M2T2LAB for CSC 134 online class
SethG
09/28/2025
This program will calculate a complete receipt
*/

#include <iostream>
#include <iomanip> // This will be used for the decimal place. We will do 2 decimal places
using namespace std;

int main()

{
    // output 0 (no errors)

    // Variables for the process
    string item = "🥪 sub";
    double item_price = 5.99;
    double tax_percent = 0.08;  // 8% is 8/100
    double tax_amount;          // tax in $
    double total;               // price + tax


    // Will greet the user and take their order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // Program will create a simple receipt with a calculated (8%) sales tax
    // Calculate the total price including sales tax
    tax_amount = item_price * tax_percent; // calculate the 8% of the item price
    total = item_price + tax_amount;

    // Print receipt
    cout << setprecision(2) << fixed;
    cout << "********************" << endl;
    cout << "   Subtotal:" << "\t\t$" << item_price << endl;
    cout << "   Tax:" << "\t\t\t$" << tax_amount << endl;
    cout << "   Your total is:" << "\t$" << total << endl;
    cout << "____________________" << endl;
    cout << "Thank you for your purchase." << endl;
    cout << endl;




    return 0;
}


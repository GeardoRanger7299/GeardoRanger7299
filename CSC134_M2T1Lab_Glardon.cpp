/*
CSC134
M2T2LAB for CSC 134 online class
SethG
09/21/2025
This program will serve as the checkout machine
*/


#include <iostream>
#include <iomanip> //For the use of 2 decimal places
using namespace std;

int main()
{
    // output: 0 (no errors)

    //This will be the variables for the process
    string first_name, last_name, short_name;    // This is for the cutomer's name
    string product_1 = "staple strips";
    int amount_purchased;
    double cost_each = 0.75;
    double total_cost;

    //Greeting the customer
    cout << "Welcome to our " << product_1 << " store" <<endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    string last_initial = last_name.substr(0, 1);
    short_name = first_name + " " + last_initial + ".";
    cout << "Nice to meet you, " << short_name << endl;


    //This will ask how many of the item the customer wants to purchase
    cout << "How mady " << product_1 << " would you like to purchase?";
    cin >> amount_purchased;

    //Total price calculation
    total_cost = amount_purchased * cost_each;

    //Formatting: Sets all prices to 2 decimal places.
    //Book ch-2.10 says setw manipulator but setprecision will be used in this case.
    cout << setprecision(2) << fixed;

    //This will give the result of the calculations
    cout << "For " << amount_purchased << " " << product_1 << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;



    return 0;

}
/*
CSC134
M2T2LAB for CSC 134 online class
SethG
09/21/2025
This program will serve as the checkout machine
*/


#include <iostream>
using namespace std;

int main()
{
    // output: 0 (no errors)

    //This will be the variables for the process
    string first_name, last_name, short_name;    // This is for the cutomer's name
    string product_1 = "staples";
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

    return 0;

}
/*
CSC134
M2HW1 - Gold
SethG
10/05/2025
This program will act as a banking account
*/

#include <iostream>
#include <iomanip> //For the 2 decimal places
using namespace std;

int main ()

{

    //variables
    string first_name, last_name, short_name; //For customers account name



    //Greet customer
    cout << "Welcome to NC Universal Banking." << endl;
    cout << "Please enter the name on the account." << endl;
    cout << "First name: ";
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    string last_initial = last_name.substr(0, 1);
    short_name = first_name + " " + last_initial + ".";
    cout << "Hello, " << short_name << " This is your account information."

















}

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
    string account_number = "3676124871";
    const double account_balance = 10342.52;



    //Greet customer
    cout << "Welcome to NC Universal Banking." << endl;
    cout << "Please enter the name on the account." << endl;
    cout << "First name: ";
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    string last_initial = last_name.substr(0, 1);
    short_name = first_name + " " + last_initial + ".";
    cout << endl;
    cout << "Hello, " << short_name << " This is your account information." << endl;

    //This will show the account information
    cout << "- - - - - - - - - - -" << endl;
    cout << short_name << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Current account balance: " << account_balance << endl;
    cout << endl;
    
    //User input
    int choice;
    cout << "What would you like to do today?" << endl;
    cout << "Please type Deposit or Withdrawal." << endl;
    cout << "Your choice: ";
    cin >> choice;

    //Calculations for user input will be here
    //Calculation variables
    double deposit, //How much being added to the account
    withdrawal, //How much being taken from the account
    deposit_end_balance, //Balance after deposit
    withdrawal_end_balance; //Balance after withdrawal

    //Calculations
    deposit_end_balance = deposit + account_balance;
    withdrawal_end_balance = withdrawal + account_balance;

    if (Deposit == choice) {
        cout << "How much would you like to deposit?"
        cout << "Deposit: " << endl;
        cin >> Deposit
    }















    return 0;

}

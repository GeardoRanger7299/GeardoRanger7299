/*
CSC134
M3HW - Gold
SethG
10/19/2025
This program will answer 4 homework questions.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main()

{

    //First question of the assignment.
    cout <<"Question #1" << endl;
    //This program will act as a super simple chat bot.

    //Variables
    string choice, yes, no;

    //Greet user
    cout << "Hello, I am Jarvis, a simple C++ chatbot program!" << endl;
    cout << "Would you like to be my friend? Please answer yesr or no." << endl;
    cout << "Input: ";
    cin >> choice;

    //Responses
    if (choice == "yes") {
        cout << "Amazing! I hope we can be great friends from now on!" << endl;
    }
    else if (choice == "no") {
        cout << "That's ok. Not everyone can be friends." << endl;
    }
    else {
        cout << "That is not a valid answer to the question." << endl;
        cout << "If you are not sure you can always come back later." << endl;
    }
    cout << endl;

    //Second question of the assignment.
    cout << "Question #2" << endl;
    //This will calculate the information for a receipt.

     // Variables for the process
    int order_choice;
    double item_price;
    double tax_percent = 0.08;  // 8% is 8/100
    double tax_amount;          // tax in $
    double tip_amount = 0.00;
    double total;               // price + tax


    // Will greet the user and take their order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;

    //Request user input
    cout << "Please enter the price of the meal." << endl;
    cout << "Meal price: ";
    cin >> item_price;
    cout << endl;

    cout << "Eneter 1 for dine in or 2 for to go." << endl;
    cin >> order_choice;
    cout << endl;

    // Calculate the total price including sales tax
    tax_amount = item_price * tax_percent; // calculate the 8% of the item price
    total = item_price + tax_amount;
    double tip_percent = 0.15;

    if (order_choice == 1) {
        tip_amount = item_price * tip_percent;
    }
    else if (order_choice == 2) {
        tip_amount = item_price * 0;
    }

    // Print receipt
    cout << setprecision(2) << fixed;
    cout << "********************" << endl;
    cout << "   Subtotal:" << "\t\t$" << item_price << endl;
    cout << "   Tax:" << "\t\t\t$" << tax_amount << endl;
    cout << "   Tip:" << "\t\t\t$" << tip_amount << endl;
    cout << "   Your total is:" << "\t$" << total << endl;
    cout << "____________________" << endl;
    cout << "Thank you for your purchase." << endl;
    cout << endl;

    //Third question of the assignment.
    cout << "Question #3" << endl;
    //Program for a CYOA(Choose Your Own Adventure) game.


    //Fourth question of the assignment.
    cout << "Question #4" << endl;
    //Math practice program.

    cout << "Let's do some Math practice." << endl;
    int seed = time(0);
    srand(seed);

    const int MAX = 50;
    int random_1, random_2, total, answer;

    random_1 = (rand() % MAX) + 1; // Divide by Max, just keep remainder
    random_2 = (rand() % MAX) + 1;
    total = random_1 + random_2;
    cout << "What is " << random_1 << " + " << random_2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if (answer == total) {
        cout << "Congradulations! That is correct!" << endl;
    }
    else if (answer != total) {
        cout << "Sorry. That is not correct" << endl;
    }



    return 0;

}

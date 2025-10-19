/*
CSC134
M2HW2 - Gold
SethG
10/19/2025
This program will act as a super simple chat bot.
*/

#include <iostream>
using namespace std;

int main()

{

    //Variables
    string choice, yes, no;

    //Greet user
    cout << "Hello, I am Jarvis, a simple C++ chatbot program!" << endl;
    cout << "Would you like to be my friend? Please answer yesr or no." << endl;
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

    return 0;

}

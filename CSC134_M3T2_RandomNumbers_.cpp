/*
CSC134
M3T2 for CSC 134 online class
SethG
09/28/2025
This program will do dice rolls for "Craps dice game"
*/

#include <iostream>

// This will be for the random numbers

// For pseudo-random numbers
#include <cmath>
// For making the numbers truly random
#include <ctime>
using namespace std;

int main()

{

    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    //cout << "The seed is; " << seed << endl;
    //cout << "What is your lucky number?" << endl;
    //cin >> seed;
    // Seed the RNG
    srand(seed); // Srand - seeds the random number generator with the given number.


    const int MAX = 6; // Standard D6. Ranges from 1-6
    int roll_1, roll_2, total;

    roll_1 = (rand() % MAX) + 1; // Divide by Max, just keep remainder
    cout << "Your roll was: " << roll_1 << endl;
    roll_2 = (rand() % MAX) + 1;
    cout << "and: " << roll_2 << endl;
    total = roll_1 + roll_2;
    cout << "Your total roll is: " << total << endl;


    //Let's play a game of Craps!
    // Win! - 7 and 11
    // Lose! - 2 and 12

    // Will be working on the other parts later.
    if (total ==7) {
        cout << "Big red! You win!" << endl;
    }
    else if (total ==11) {
        cout << "Winner with an eleven!" << endl;
    }
    else if (total ==2) {
        cout << "Snake eyes! You lose, better luck next time!" << endl;
    }
    else if (total ==3) {
        cout << "Ace-Duece, You lose!" << endl;
    }
    else if (total ==12) {
        cout << "Midnight! That is a loss!" << endl;
    }
    else {
        // Anything else
        cout << "Your point is " << total << " This will be worked on later" << endl;
    }




    return 0;

}
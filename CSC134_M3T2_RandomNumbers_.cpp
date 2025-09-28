/*
CSC134
M3T2 for CSC 134 online class
SethG
09/28/2025
This program will do dice rolls
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
    int seed;
    cout << "What is your lucky number?" << endl;
    cin >> seed;
    // Seed the RNG
    srand(seed); // Srand - seeds the random number generator with the given number.


    const int MAX = 6; // Standard D6. Ranges from 1-6
    int roll = rand() % MAX; // Divide by Max, just keep remainder

    cout << "Your roll was: " << roll << endl;
    cout << "and: " << rand() % MAX << endl;
    cout << "and: " << rand() % MAX << endl;




    return 0;

}
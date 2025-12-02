/*
CSC134
M6T1
SethG
12/02/2025
This program will cover basic arrays using cars
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

// Function Declarations
void Part_1();
void Part_2();

// main
int main() {
    // Count # of Pokemon per day, two different ways
    Part_1(); //No arrays
    cout << "------------------------------------------------------" << endl;
    Part_2(); //Arrays

    return 0;
}

// function definitions
void Part_1() {
    // Method one - no arrays
    const int Total_Days = 5;
    int Total_Cars = 0;

    cout << "Please enter the amount of cars for each day." << endl;
    cout << "The days will be Monday through Friday." << endl;
    cout << "Total cars for the day: ";

    for (int day = 1; day <= Total_Days; day++) {
        int Total_Cars_Day;
        do {
            cout << "Day " << day << ": ";
            cin >> Total_Cars_Day;
        }
    }

    double Average_Total_Cars = (double) Total_Cars / Total_Days;
    cout << "The total cars counted: " << Total_Cars;
    cout << "The average total of cars: " << Average_Total_Cars;
}
    

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> poke_today;
        poke_total += poke_today;
        count++; // Move to next day
    }
    cout << "Total = " << poke_total << endl;
    poke_avg = (double) poke_total / SIZE;
    cout << "Average = " << poke_avg << endl;
}

void Part_2() {
    // Method 2 uses two arrays:
    // Names of the days
    // # pokemon found on the days

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; // initialized
    int pokemon[SIZE]; // not initialized
    int poke_total = 0;
    double poke_avg = 0.0;

    for (int i=0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> pokemon[i];
    }
    // print output in "tabular" (table) format
    cout << "Day\tPokemon" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t" << pokemon[i] << endl;
        // find the total
        poke_total += pokemon[i];
    }
    // find total, print results
    poke_avg = (double) poke_total / SIZE;
    cout << "Total = " << poke_total << endl;
    cout << "Average = " << poke_avg << endl;

}
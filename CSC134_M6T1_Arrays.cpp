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

    cout << fixed << setprecision(2);
    
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

    for (int day = 1; day <= Total_Days; day++) {
        int Total_Cars_Day;
        do {
            cout << "Total cars for day " << day << ": ";
            cin >> Total_Cars_Day;
            if (Total_Cars_Day < 0) {
                cout << "The total cars cannot be negative. That would be an anomaly." << endl;
                cout << "Please try again." << endl;

            }
        }
        while (Total_Cars_Day < 0);
        Total_Cars += Total_Cars_Day;
    }

    double Average_Total_Cars = (double) Total_Cars / Total_Days;
    cout << "The total cars counted: " << Total_Cars << endl;
    cout << "The average total of cars: " << Average_Total_Cars << endl;
}
    

void Part_2() {
    // Method 2 uses two arrays:
    const int Total_Days = 5;
    vector<int> Cars_Per_Day (Total_Days);
    int Total_Cars = 0;
    string Name_of_Day [Total_Days] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    cout << "Please enter the amount of cars for each day." << endl;
    cout << "The days will be Monday through Friday." << endl;

    for (int i = 0; i < Total_Days; i++) {
        int Total_Cars_Day;
        do {
            cout << Name_of_Day [i] << ": ";
            cin >> Total_Cars_Day;
            if (Total_Cars_Day < 0) {
                cout << "The total cars cannot be negative. That would be an anomaly." << endl;
                cout << "Please try again." << endl;
            }
            
        }
        while (Total_Cars_Day < 0);
            Cars_Per_Day [i] = Total_Cars_Day;
            Total_Cars += Cars_Per_Day [i];
    }

    double Average_Total_Cars = (double) Total_Cars / Total_Days;

    cout << "Day" << "\t\t" << "Average total cars" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < Total_Days; i++) {
        cout << Name_of_Day [i] << "\t\t" << Cars_Per_Day [i] << endl;
    }

    cout << "The total cars counted: " << Total_Cars << endl;
    cout << "The average total of cars: " << Average_Total_Cars << endl;

    //This will be the attempted bar chart portion of the assignment.
    cout << "1# = 10 cars" << endl;
    const int Scale = 10;
    

    for (int i = 0; i < Total_Days; i++) {
        cout << "\t" << Name_of_Day [i] << " | ";
        int hashtags = Cars_Per_Day [i] / Scale;
        for (int j = 0; j < hashtags; j++) {
            cout << "#";
        }
        cout << Cars_Per_Day [i] << " cars" << endl;
    }

    
}
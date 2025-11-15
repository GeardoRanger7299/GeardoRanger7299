/*
CSC134
M5HW Gold
SethG
11/15/2025
This program 
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{

    //Rain variables
    string Month_1, Month_2, Month_3;
    double RainfallMonth_1, RainfallMonth_2, RainfallMonth_3;
    double AverageRainfall;

    //Rain data entry month 1
    cout << "Please enter the first month." << endl;
    cout << "Month 1: ";
    cin >> Month_1;
    cout << "Please enter the rainfall for the month of " << Month_1 << "." << endl;
    cout << "Rainfall: ";
    cin >> RainfallMonth_1;
    cout << endl;

    //Rain data entry month 2
    cout << "Please enter the second month." << endl;
    cout << "Month 2: ";
    cin >> Month_2;
    cout << "Please enter the rainfall for the month of " << Month_2 << "." << endl;
    cout << "Rainfall: ";
    cin >> RainfallMonth_2;
    cout << endl;

    //Rain data entry month 3
    cout << "Please enter the third month." << endl;
    cout << "Month 3: ";
    cin >> Month_3;
    cout << "Please enter the rainfall for the month of " << Month_3 << "." << endl;
    cout << "Rainfall: ";
    cin >> RainfallMonth_3;
    cout << endl;
}
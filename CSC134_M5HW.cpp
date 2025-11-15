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

    //Question #1 ----------

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

    //Rain calculation portion
    AverageRainfall = (RainfallMonth_1 + RainfallMonth_2 + RainfallMonth_3) / 3.00;

    //Rain calculation results
    cout << "The average rainfall for the months of" << endl;
    cout << Month_1 << ", " << Month_2 << ", and " << Month_3;
    cout << " is " << setprecision(2) << AverageRainfall << " inches." << endl;
    cout << endl;

    //Question #2 ----------

    //Cube variables
    double Length, Width, Height;

    //Cube data entry length
    do {
        cout << "Please enter the length of the cube." << endl;
        cout << "Length: ";
        cin >> Length;
        cout << endl;

        if (Length <= 0) {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    while (Length <= 0);

    //Cube data entry Width
    do {
        cout << "Please enter the width of the cube." << endl;
        cout << "Width: ";
        cin >> Width;
        cout << endl;

        if (Width <= 0) {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    while (Width <= 0);

    //Cube data entry Height
    do {
        cout << "Please enter the height of the cube." << endl;
        cout << "Height: ";
        cin >> Height;
        cout << endl;

        if (Height <= 0) {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    while (Height <= 0);

    //Cube calculations
    double Volume = Length * Width * Height;

    //Cube results
    cout << "Your length is " << Length << "." << endl;
    cout << "Your width is " << Width << "." << endl;
    cout << "Your height is " << Height << "." << endl;
    cout << "Total volume of the cube is " << setprecision(2) << Volume << "." << endl;
    cout << endl;

    return 0;

}
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


    //Question #3 ----------

    int Number;

    //User input
    while (true) {
        cout << "Please enter a number. (1 - 10)" << endl;
        cout << "Number: ";
        cin >> Number;

        //Results
        if (Number == 1) {
            cout << "The roman numeral equivalent of " << Number << " is I." << endl;
            break;
        }
        else if (Number == 2) {
            cout << "The roman numeral equivalent of " << Number << " is II." << endl;
            break;
        }
        else if (Number == 3) {
            cout << "The roman numeral equivalent of " << Number << " is III." << endl;
            break;
        }
        else if (Number == 4) {
            cout << "The roman numeral equivalent of " << Number << " is IV." << endl;
            break;
        }
        else if (Number == 5) {
            cout << "The roman numeral equivalent of " << Number << " is V." << endl;
            break;
        }
        else if (Number == 6) {
            cout << "The roman numeral equivalent of " << Number << " is VI." << endl;
            break;
        }
        else if (Number == 7) {
            cout << "The roman numeral equivalent of " << Number << " is VII." << endl;
            break;
        }
        else if (Number == 8) {
            cout << "The roman numeral equivalent of " << Number << " is VIII." << endl;
            break;
        }
        else if (Number == 9) {
            cout << "The roman numeral equivalent of " << Number << " is IX." << endl;
            break;
        }
        else if (Number == 10) {
            cout << "The roman numeral equivalent of " << Number << " is X." << endl;
            break;
        }
        else {
            cout << "Invalid input. Please try again." << endl;
        }
        cout << endl;
        
    }


    //Question #4 ----------

    int Calc_Choice;
    const double PI = 3.14159;
    double Length_Q4, Width_Q4;

    while (true) {
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle." << endl;
        cout << "2. Calculate the Area of a Rectangle." << endl;
        cout << "3. Calculate the Area of a Triangle." << endl;
        cout << "4. Quit" << endl;
        cout << "Please select your option (1-4)" << endl;
        cout << "Choice: ";
        cin >> Calc_Choice;
        cout << endl;

        if (Calc_Choice == 1) {
            double Radius;
            cout << "Please enter the radius of the circle." << endl;
            cout << "Radius: ";
            cin >> Radius;
            cout << endl;

            while (Radius <= 0) {
                cout << "The radius cannot be 0 or less." << endl;
                cout << "Please enter the radius of the circle." << endl;
                cout << "Radius: ";
                cin >> Radius;
                cout << endl;
            }
            
            double CircArea = PI * Radius * Radius;
            cout << "The area of the circle is " << CircArea << "." << endl;
            cout << endl;
            break;
        }
        else if (Calc_Choice == 2) {
            cout << "Please enter the length of the rectangle." << endl;
            cout << "Length: ";
            cin >> Length_Q4;
            cout << "Please enter the width of the rectangle." << endl;
            cout << "Width: ";
            cin >> Width_Q4;
            cout << endl;

            while (Length_Q4 <= 0 || Width_Q4 <= 0) {
                cout << "The input cannot be 0 or less." << endl;
                cout << "Please enter the length of the rectangle." << endl;
                cout << "Length: ";
                cin >> Length_Q4;
                cout << "Please enter the width of the rectangle." << endl;
                cout << "Width: ";
                cin >> Width_Q4;
                cout << endl;
            }

            double Area = Length_Q4 * Width_Q4;
            cout << "The area of the rectangle is " << Area << "." << endl;
            cout << endl;
            break;
        }
        else if (Calc_Choice == 3) {
            double Base, Triangle_Height;
            cout << "Please enter the base of the triangle." << endl;
            cout << "Base: ";
            cin >> Base;
            cout << "Please enter the height of the triangle." << endl;
            cout << "Height: ";
            cin >> Triangle_Height;
            cout << endl;

            while (Base <= 0 || Triangle_Height <= 0) {
                cout << "The input cannot be 0 or less." << endl;
                cout << "Please enter the base of the triangle." << endl;
                cout << "Base: ";
                cin >> Base;
                cout << "Please enter the height of the triangle." << endl;
                cout << "Height: ";
                cin >> Triangle_Height;
                cout << endl;
            }

            double Triangle_Area = Base * Triangle_Height * 0.5;
            cout << "The area of the triangle is " << Triangle_Area << "." << endl;
            cout << endl;
            break;
        }
        else if (Calc_Choice == 4) {
            cout << "Stopping program" << endl;
            cout << endl;
            break;
        }
    }


    //Question #5 ----------


    double Speed;
    int Hours;

    //Speed input
    cout << "What is the speed of the vehicle in mph?" << endl;
    cout << "Speed: ";
    cin >> Speed;
    cout << endl;
    while (Speed <= 0) {
        cout << "The speed cannot be 0 or less." << endl;
        cout << "Speed: " << endl;
        cin >> Speed;
        cout << endl;
    }

    //Time input
    cout << "How many hours has the vehicle traveled?" << endl;
    cout << "Hours: ";
    cin >> Hours;
    cout << endl;
    while (Hours < 1) {
        cout << "The Hours must be at least 1." << endl;
        cout << "Hours: ";
        cin >> Hours;
        cout << endl;
    }

    //Table setup
    cout << "\n" << "Hours" << "\t\t" << "Distance Traveled" << "\n";
    cout << "--------------------------------" << endl;

    //Calculations and data layout
    for (int NewHours = 1; NewHours <= Hours; ++NewHours) {
        double Distance = Speed * NewHours;
        cout << NewHours << "\t\t" << Distance << endl;
        cout << endl;
    }
    return 0;

}

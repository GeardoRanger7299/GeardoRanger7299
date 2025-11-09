/*
CSC134
M5Lab2 for CSC 134 online class
SethG
11/09/2025
This program will calculate a rectangle using functions
*/

#include <iostream>
#include <iomanip> //Required for setprecision. 2 decimal places
using namespace std;


double getLength (), getWidth ();
double getArea (double length, double width);
void displayData (double area, double length, double width);

int main()

{

    double length, width, area;
    area = getArea (length, width);
    length = getLength ();
    width = getWidth ();
    displayData (area, length, width);

    return 0;
     
}

//Asks for user input for the rectangles length
//Returns the value as double
double getLength () {
    double length;
    cout << "Please enter the length of the rectangle." << endl;
    cout << "Length: ";
    cin >> length;
    cout << endl;
    return length;
}

//Asks for user input for the rectangles width
//Returns the value as double
double getWidth() {
    double width;
    cout << "Please enter the width of the rectangle." << endl;
    cout << "Width: ";
    cin >> width;
    cout << endl;
    return width;
}

//The getArea function that takes the 2 arguments.
double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2); //2 decimal places

    cout << "The length of the triangle: " << setw(10) << length << endl;
    cout << "The width of the triangle: " << setw(10) << width << endl;
    cout << "The area of the triangle: " << setw(10) << area << endl;
}

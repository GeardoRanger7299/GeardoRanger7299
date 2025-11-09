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
void displayData (double length, double width, double area);

/* Original template

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth()
   
   // Get the rectangle's area.
   are = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}
*/
int main()

{

    double length, width, area;
    length = getLength ();
    width = getWidth ();
    area = getArea (length, width);
    displayData (length, width, area);

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

//Provide rectangle data
void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2); //2 decimal places

    cout << "The length of the triangle: " << "\t" << length << endl;
    cout << "The width of the triangle: " << "\t" << width << endl;
    cout << "The area of the triangle: " << "\t"<< area << endl;
    cout << endl;
}

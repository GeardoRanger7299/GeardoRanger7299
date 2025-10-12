/*
CSC134
M3T1 for CSC 134 online class
SethG
10/12/2025
This program will Calculate the area of rectangles
*/

#include <iostream>
using namespace std;

int main()

{

    //Variables
    int width_rec_one, length_rec_one, width_rec_two, length_rec_two;
    int area_rec_one, area_rec_two;

    //User input
    cout << "Please enter the length and width of rectangle one," << endl;
    cout << "separated by a space or new line." << endl;
    cin >> length_rec_one >> width_rec_one;

    cout << "Please enter the length and width of rectangle two," << endl;
    cout << "separated by a space or new line." << endl;
    cin >> length_rec_two >> width_rec_two;

    //Calculations based off user input
    area_rec_one = length_rec_one * width_rec_one;
    area_rec_two = length_rec_two * width_rec_two;

    //Results from calculations
    cout << endl;
    cout << "The area of rectangle one is " << area_rec_one << endl;
    cout << "The area of rectangle two is " << area_rec_two << endl;

    //which rectangle is bigger
    if (area_rec_one > area_rec_two) {
        cout << "The area of rectangle one is bigger." << endl;
    }

    else if (area_rec_two > area_rec_one) {
            cout << "The area of rectangle two is bigger." << endl;
        }

    else if (area_rec_one == area_rec_two) {
        cout << "The area of both rectangles are the same." << endl;
    }

    cout << endl;
    cout << "Thank you for your time. Have a nice day!" << endl;


    return 0;

}
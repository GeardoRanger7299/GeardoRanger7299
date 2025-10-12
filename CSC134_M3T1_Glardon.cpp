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
    cout << "Please enter the length and width of the first rectangle," << endl;
    cout << " separated by a space or new line" << endl;
    cin >> length_rec_one >> width_rec_one;

    cout << "Please enter the length and width of the second rectangle," << endl;
    cout << " separated by a space or new line" << endl;
    cin >> length_rec_two >> width_rec_two;

    //Calculations based off user input
    area_rec_one = length_rec_one * width_rec_one;
    area_rec_two = length_rec_two * width_rec_two;

    //Results from calculations
    cout << "The area of the first rectangle is " << area_rec_one << endl;
    cout << "The area of the second rectangle is " << area_rec_two << endl;

    return 0;

}
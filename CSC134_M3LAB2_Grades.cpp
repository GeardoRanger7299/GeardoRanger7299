/*
CSC134
M3Lab2 for CSC 134 online class
SethG
10/12/2025
This program will give a letter grade for the respective letter grade
*/

#include <iostream>
using namespace std;

int main()

{

    //Variables
    int number_grade;

    //Asking for user input
    cout << "Please enter your number grade." << endl;
    cout << "The number grade will range from 0 to 100." << endl;
    cout << "Number grade: ";
    cin >> number_grade;
    cout << endl;

    //Letter grade based oof number using "if" and "boolean" operations
    if (number_grade >= 90 && number_grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (number_grade >= 80 && number_grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (number_grade >= 70 && number_grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (number_grade >= 60 && number_grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    }
    else if (number_grade >= 0 && number_grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    }
    else {
        cout << "The user input is not valid. Please restart process." << endl;
    }


    return 0;

}
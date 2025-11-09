/*
CSC134
M3T1 for CSC 134 online class
SethG
11/09/2025
This program will be the second practice assignment for functions
*/

#include <iostream>
using namespace std;

void OutputMinutesAsHours (double origMinutes) {

    double hours;
    hours = origMinutes / 60;
    cout << hours;

}

int main()

{

    double minutes;

    cin >> minutes;

    OutputMinutesAsHours (minutes);
    cout << endl;

    return 0;
}
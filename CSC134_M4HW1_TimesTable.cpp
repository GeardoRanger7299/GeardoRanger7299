/*
CSC134
M3T1 for CSC 134 online class
SethG
10/26/2025
This program will build a square using asterisks
*/

#include <iostream>
using namespace std;

int main()

{
    int first_number, second_number, total;
    first_number = 5;

    do {
        cout << "Please enter a number." << endl;
        cout << "Minimum 0 and maximum 12." << endl;
        cout << "Number: ";
        cin >> second_number;
        cout << endl;

        if (second_number < 0 || second_number > 12) {
            cout << "Invalid. Please enter a valid number" << endl;
        }
    }

    while (second_number < 0 || second_number > 12); 
    for (int i = 1; i <= 12; i++) {
        total = second_number * i;
        cout << second_number << " times " << i << " is " << total << endl;
        cout << "------------------------" << endl;
    }


    return 0;
}

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
    cout << "Please enter a number up to 12" << endl;
    cout << "Number: ";
    cin >> second_number;
    cout << endl;

    do {
        cout << "Please enter a number up to 12" << endl;
        cout << "Number: ";
        cin >> second_number;
        cout << endl;
    }
    
    while (second_number >= 1 && second_number <= 12) {
        for (int i = 1; i <= 5; i++) {
            total = first_number * i;
            cout << first_number << " times " << i << " is " << total << endl;
        }
    }


    return 0;
}

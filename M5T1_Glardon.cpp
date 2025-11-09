/*
CSC134
M3T1 for CSC 134 online class
SethG
11/09/2025
This program will be a practice assignment for functions
*/

#include <iostream>
using namespace std;

int doubleANumber (int num);

int main() {
    int number = 4;
    number = doubleANumber (number);
    cout << number << endl;
    return 0;
}
int doubleANumber (int num) {
    num = num * 2;
    return num;
}

/*
CSC134
M3T1 for CSC 134 online class
SethG
11/09/2025
This program will be the second practice assignment for functions
*/

#include <iostream>
using namespace std;

void printResult (int number, int result) {
    cout << number << " squared = " << result << endl;
}


int main()

{

    int count = 1;
    int result;

    while (count <=10) {
        result = count *count;
        printResult (count, result);
        count++;
    }
}
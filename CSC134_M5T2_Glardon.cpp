/*
CSC134
M5T2 for CSC 134 online class
SethG
11/09/2025
This program will be the second practice assignment for functions
*/

#include <iostream>
#include <math.h>
using namespace std;

/*
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
*/


void printResult (int number, int result) {
    cout << number << " squared = " << result << endl;
}

//Give a number and return the square of that number
int square (int number) {
    int result;
    result = number * number;
    return result;
}

int main()

{

    int count = 1;
    int result;

    while (count <=10) {
        result = square (count);
        printResult (count, result);
        count++;
    }
}


/*
//An alternative way of doing the same thing the previous version does but as exponential growth
void printResult (int number, int result) {
    cout << number << " : " << result << endl;
}

int growth (int number) {
    int result = pow ((double) 2 , (double) number);
    return result;
}

int main()
// Exponential growth instead of squared
{

    int number, result;
    number = 1;

    while (number <=10) {
        result = growth (number);
        printResult (number, result);
        number++;
    }
}
*/
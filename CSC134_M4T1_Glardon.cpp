/*
CSC134
M4T1
SethG
10/19/2025
This program will focus on loops.
*/

#include <iostream>
using namespace std;

int main()

{
    //Program 5-3
    //Loops
    int number = 5;
    int i = 0;
    while (i < number) {
        cout << "Hello\n" << endl;
        i = i + 1; // i++; is an alternative to this
    }
    cout << "That's all!\n" << endl;
    cout << endl;

    //Program 5-6
    const int min_number = 1; //Starting at 1
    const int max_number = 10; //Ending at 10 because of <=
    int num = min_number;
    cout << "Number\t\tNumber Squared" << endl; //Table header

    while (num <= max_number) { //Works with line 28. <= instead of < because < stops at 9 instead of 10
        cout << num << "\t\t" << num * num << endl;//For spacing and tabs we use \t
        num++; //num = num + 1 is alternative

    }
    cout << endl;


    return 0;

}
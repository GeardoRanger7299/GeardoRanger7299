/*
CSC134
M1LAB for CSC 134 online class
SethG
09/13/2025
This program will advertise apples 
*/


#include <iostream>
using namespace std;

int main()
{
    // output: 0 (no errors)

    //This program will simulate an apple orchard.
    //The owner's name
    string name = "Jane Smith";
    //Total number of apples owned
    int apples = 100;
    //Price per apple
    double pricePerApple = 0.25;

    //This will calculate the total price of the apples
    //TODO

    //Print all the information about the orchard
    cout << "Welcome to " << name;
    cout << "'s apple orchard. " << endl;
    cout << "We have " << apples;
    cout << " apples in stock " << endl;
    cout << "Apples are currently $" ;
    cout << pricePerApple << " each." << endl;

}
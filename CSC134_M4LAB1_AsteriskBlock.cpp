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
    int height, width;

    cout << "How tall do you want the block to be?" << endl;
    cout << "Height: ";
    cin >> height;
    cout << endl;

    cout << "How wide do you want the block to be?" << endl;
    cout << "Width: ";
    cin >> width;
    cout << endl;

    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
        cout << "*" << " ";
        }
    cout << endl; // This will finish the row
    }
    /*
    We use the previous setup to get the desired result. (nested loops)
    
    for (int i = 0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    for (int j = 0; j < height; j++) {
        cout << "*" << " ";
    }

    These would make something like this
    * * * * *
    *
    * 
    * 
    * 
    instead of the results we want
    
    */
    





    return 0;
}

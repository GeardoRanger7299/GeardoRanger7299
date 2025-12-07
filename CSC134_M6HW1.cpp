/*
CSC134
M6HW1 for CSC 134 online class
SethG
12/07/2025
This program will be a choose your own adventure game in the
theme of one of my favorite game seriese Dark Souls.
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;


/*
In the world of dark souls there are different currencies
and items used throughout the games. For the sake of making this simple
and a little easier to do I will only be "Humanity" and "Boss souls"
similar to that of the 1st game
*/
int humanity = 0;
const int Max_Humanity = 10;
/*
Even though the max humanity in DS1 is 99, for
simplicity in the program the max will be 10
*/
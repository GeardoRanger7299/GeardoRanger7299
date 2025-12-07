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


void Bonfire ();
void Firelink_Shrine ();
void New_Londo_Ruins ();
void Undead_Burg ();
void Age_of_Fire_Ending ();
void Age_of_Dark_Ending ();


int main()

{

cout << "An old voice rings out to you in the darkness." << endl;
cout << "It tells you a tale of the first fire and how humanity came into possession of it" << endl;
cout << "Humanity waged war against the ancient dragons and started the age of fire." << endl;
cout << "This age would not last long. The fire was fading. Darkness was encroaching." << endl;
cout << "What little light that remains is only embers." << endl;
cout << "Amongst the living in humanity are carriers branded by a sign. The dark soul." << endl;
cout << "They seek the remaining embers of fire to keep the darkness away." << endl;
cout << "You are one of these branded mortals. Forever cursed to seek fire." << endl;
cout << "With the fires dying, what will you do?" << endl;
cout << endl;




}

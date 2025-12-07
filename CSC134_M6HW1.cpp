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
int Humanity = 0;
const int Max_Humanity = 10;
bool Boss_Soul = false;
/*
Even though the max humanity in DS1 is 99, for
simplicity in the program the max will be 10
*/


void Firelink_Shrine ();
void New_Londo_Ruins ();
void Undead_Burg ();
void First_Flame_Altar ();
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

cout << "You awaken at the Firelink Shrine next to a bonfire. The flame is faded" << endl;
cout << "Upon looking around you notice a decrepid statue." << endl;
cout << "This statue appeared to depict two bodies fused together into an abomination." << endl;
cout << "One pointed North while the other Pointed South." << endl;
cout << "There is a white soapstone sign at the bottom." << endl;
cout << "It says North to Undead Burg and South to City Ruins." << endl;

return 0;

void Firelink_Shrine () {

    int choice;

    cout << "-{Firelink Shrine}-" << endl;
    cout << "The faint fading bonfire warms you as you are sitting there." << endl;
    cout << "Humanity level: " << Humanity << "/" << Max_Humanity << endl;
    cout << "1. Head North to the Undead Burg." << endl;
    cout << "2. Head South to the city ruins." << endl;
    cout << "3. Head to the Altar of the First Flame." << endl;
    cout << "What will you do?" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        Undead_Burg ();
    }
    else if (choice == 2) {
        New_Londo_Ruins ();
    }
    else if (choice == 3) {
        First_Flame_Altar ();
    }
    else {
        cout << "Your will wavers. Forge your path";
        Firelink_Shrine ();
    }
}

void Undead_Burg () {

    int choice;

    cout << "-{Undead Burg}-" << endl;
    cout << "The air is cold and filled with the stench of decaying hollows wandering aimlessly." << endl;
    cout << "You cut down a hollow with your battered sword." << endl;
    cout << "You gain a bit of humanity after slaying the hollow." << endl;
    if (Humanity < Max_Humanity) Humanity ++;
    cout << "Humanity level is now: " << Humanity << endl;
    cout << endl;

    cout << "Two paths lay before you." << endl;
    cout << "1. Return to the Firelink Shrine." << endl;
    cout << "2. Venture deeper into the Burg." << endl;
    cout << "What will you do?" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        Firelink_Shrine ();
    }
    else if (choice == 2) {
        if (Humanity >= 2) {
            cout << "You venture deeper into the burg." << endl;
            cout << "After a bit you enter a large room with a glowing pit." << endl;
            cout << "The door closes behind you and a large demon made from dark flames emerges from the pit." << endl;
            cout << "After a long battle you finally kill the demon." << endl;
            cout << "Upon its defeat it drops two items, ahomeward bone and its boss soul" << endl;
            cout << "After picking these items up you use the homeward bone to return to the Firelink Shrine." << endl;

            Firelink_Shrine ();
        }
        else {
            cout << "You venture deeper into the burg." << endl;
            cout << "After a bit you enter a large room with a glowing pit." << endl;
            cout << "The door closes behind you and a large demon made from dark flames emerges from the pit." << endl;
            cout << "Shortly into the battle you became overwhelmed and the demon gave you a swift end." << endl;
            cout << "Your humanity was lacking." << endl;
            cout << "YOU DIED" << endl;
            Firelink_Shrine ();
        }
    }
    else {
        cout << "You strayed from the path which lead to a dead end." << endl;
        cout << "Return to the Fireling Shrine." << endl;
        Firelink_Shrine ();
    }
}

void New_Londo_Ruins () {

    int choice;

    cout << "-{New Londo Ruins}-" << endl;
    cout << "The forgotten city, flooded and haunted by ghosts that phase through your blade." << endl;

    if (!Boss_Soul) {
        cout << "You cannot harm the ghosts without first attaining great demonic power." << endl;
        cout << "You have no choice but to retreat." << endl;
        Firelink_Shrine ();
    }
    else {
        cout << "After absorbing the soul of the demon, you are now able to harm the ghosts." << endl;
        cout << "You fight your way through the ruins going deeper and deeper." << endl;
        cout << "Eventually you come across a dark void." << endl;
        cout << "The coid calls to you. You reach out and touch it." << endl;
        cout << "You gain a bit of humanity after touching the void." << endl;
        if (Humanity < Max_Humanity) Humanity ++;
        cout << "The void suddenly drags you in and you become unconcious." << endl;
        cout << "After a bit you wake up at the Alter of the First Flame." << endl;
        First_Flame_Altar ();
    }
}

void First_Flame_Altar () {

    int choice;

    cout << "-{Altar of the First Flame}-" << endl;
    cout << "You find yourself in the Alter of the First Flame." << endl;
    cout << "At the end of the room you see a flickering weak fire." << endl;
    cout << "The first flame. The very thing that started everything in this messed up world." << endl;
    cout << "What will you do?" << endl;
    cout << "Will you offer yourself to link the fire and give it the fuel to go on?" << endl;
    cout << "Or will you let the fire die and bring about the darkness?" << endl;
    cout << "The fate of the world rests on this decision." << endl;
    cout << "1. Link the fire (Preserve the age of fire)" << endl;
    cout << "2. Let the fire die (Embrace the darkness)" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        First_Flame_Altar ();
    }
    else if (choice == 2) {
        Age_of_Dark_Ending ();
    }
    else {
        cout << "This is a heavy choice. Every passing moment the flame grows weaker." << endl;
        First_Flame_Altar ();
    }

}

void First_Flame_Altar () {
    
}

/*
CSC134
M5LabA
SethG
11/09/2025
This program will do all 3 exercises of M5LabA.
*/



#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;


int LP = 30;
const int max_LP = 100;
const int recover = 10;
const string current_LP_indic = "*";
const string missing_LP_indic = "°";
int strength = 3;
int dexterity = 4;
int stamina = 2;
const int max_trait_lvl = 10;


void search_bag () {
    vector<string> equipment = {"sword", "shield", "LP potion", "torch", "rations"};
    string searchTerm;
    bool found = false;
    int position = -1;

    cout << "Equipment" << endl;
    for (int i = 0; i < equipment.size (); ++i) {
        cout << i + 1 << ". " << equipment[i] << endl;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter the item you are searching for: ";
    getline (cin, searchTerm);

    for (int i = 0; i < equipment.size(); ++i) {
        if (equipment[i] == searchTerm) {
            found = true;
            position = i + 1;
            break;
        }
    }

    if (found) {
        cout << "Found \"" << searchTerm << "\" at position " << position << "." << endl;
    } else {
        cout << "\"" << searchTerm << "\" not found in equipment." << endl;
    }

}
void display_LP_stat () {
    for (int i = 0; i < LP / 10; i++) {
        cout << current_LP_indic;
    }
    for (int i = 0; i < (max_LP - LP) / 10; i++) {
        cout << missing_LP_indic;
    }
    cout << " LP: " << LP << "/" << max_LP << endl;
}

void display_traits() {
    cout << "\t" << "Current Trait Levels ---" << endl;
    cout << "----------------------------" << endl;
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Stamina: " << stamina << endl;
    cout << "----------------------------" << endl;
}
void open_bag () {
    cout << "\t" << "Bag contents" << endl;
    cout << "----------------------------" << endl;
    search_bag ();
    cout << "You close the bag." << endl;
}

void rest_to_recover () {
    bool trait_leveled = false;
    while (LP < max_LP) {
        display_LP_stat  ();

        string choice;
        cout << "Do you want to rest and recover LP?" << endl;
        cout << "Yes or no: ";
        cin >> choice;

        for (char &c : choice) {
            c = tolower (c);
        }

        if (choice == "yes" || choice == "y") {
            LP += recover;
            if (LP > max_LP) {
                LP = max_LP;
            }
            cout << "You recovered " << recover << " LP after a short rest." << endl;

            if (!trait_leveled) {
                bool leveled_up = false;
                if (strength < max_trait_lvl) { strength++; leveled_up = true; }
                if (dexterity < max_trait_lvl) { dexterity++; leveled_up = true; }
                if (stamina < max_trait_lvl) { stamina++; leveled_up = true; }

                if (leveled_up) {
                    cout << "Your stats have increased!" << endl;
                    display_traits();
                } else {
                    cout << "\nYour traits are already at the maximum level!" << endl;
                }
                trait_leveled = true;
            } else {
                cout << "You chose not to rest." << endl;
                break;
            }
        }
    }

    cout << "----------------" << endl;
    display_LP_stat ();
    if (LP == max_LP) {
        cout << "LP fully recovered!" << endl;
    } else {
        cout  << LP << "/" << max_LP << "." << endl;
    }
}


int main() 

{
    
    cout << "Current LP: ";
    display_LP_stat ();

    while (true) {
        string choice;
        cout << "What would you like to do?" << endl;
        cout << "1. Rest to recover LP. 10 LP per rest." << endl;
        cout << "2. View your traits." << endl;
        cout << "3. Open your bag." << endl;
        cout << "4. Exit game." << endl;
        cout << "Please choose 1, 2, or 3." << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;


        if (choice == "1") {
            rest_to_recover ();
        }  else if (choice == "2") {
            display_traits ();  
        } else if (choice == "3") {
            open_bag ();
        } else if (choice == "4") {
            cout << "Thank you for playing. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
        }
    }

    return 0;
}
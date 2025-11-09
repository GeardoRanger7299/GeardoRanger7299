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


void search_bag () {
    vector<string> equipment = {"sword", "shield", "LP potion", "torch", "rations"};
    string searchTerm;
    bool found = false;
    int position = -1;

    cout << "Equipment" << endl;
    for (int i = 0; i < equipment.size (); ++i) {
        cout << i + 1 << ". " << equipment[i] << endl;
    }

    cout << "Please enter the item you are searching for: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

void open_bag () {
    cout << "\t" << "Bag contents" << endl;
    cout << "----------------------------" << endl;
    search_bag ();
    cout << "You close the bag." << endl;
}

void rest_to_recover () {
    while (LP < max_LP) {
        display_LP_stat();

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
        } else {
            cout << "You chose not to rest." << endl;
            break;
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
        cout << "2. Open your bag." << endl;
        cout << "3. Exit game." << endl;
        cout << "Please choose 1, 2, or 3." << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;


        if (choice == "1") {
            rest_to_recover ();
        } else if (choice == "2") {
            open_bag ();
        } else if (choice == "3") {
            cout << "Thank you for playing. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
        }
    }

    return 0;
}
/*
CSC134
M3Lab1 for CSC 134 online class
SethG
10/05/2025
*/

#include <iostream>
using namespace std;

int main ()

{

    int choice;
    cout << "Let's play a game." << endl;
    cout << "Before you are 3 boxes." << endl;
    cout << "One box has a key to escape the room and the others trigger sleeping gas." << endl;
    cout << "Which box will you chose? 1, 2, or 3?" << endl;
    cout << "Your choice: ";
    cin >> choice;


    if (1 == choice) {
        cout << "Wrong choice. Time to sleep." << endl;
    }
    else if (2 == choice) {
        cout << "Good choice. You can now escape. ...However" << endl;
        cout << "I added a twist to this little game of ours." << endl;
        cout << "There are 2 keys in the box you chose." << endl;
        cout << "One one is your freedom and one floods the room with gas." << endl;
        cout << "1-Big key, 2-Small key. 1 or 2." << endl;
        cout << "Your choice: ";
        cin >> choice;

        if (1 == choice){
            cout << "You made the correct choice." << endl;
        }
        else if (2 == choice) {
            cout << "I had better expectations for you. Too bad." << endl;
        }
    }
    else if (3 == choice) {
        cout << "You failed to escape." << endl;
    }
    else {
        cout << "This box does not exist. Hurry and pick the correct box!" << endl;
    }
    
    cout << "Thank you for playing my game. Come back soon." << endl;



    return 0;


}
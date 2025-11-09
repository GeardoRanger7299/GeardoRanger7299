#include <iostream>
using namespace std;

int main()

{

    int LP = 30;
    int max_LP = 100;
    const int recover = 10;
    

    string current_LP = "*";
    string missing_LP = "°";

    while (LP < max_LP) {
        LP += recover;  
        
        for (int i=0 ; i < LP/10; i++) {
            cout << current_LP;
        }
        for (int i=0; i < (100-LP)/10; i++) {
            cout << missing_LP;
        }
        
        cout << " LP: " << LP << "/" << max_LP << endl;

        string choice;
        cout << "Do you want to rest and recover LP?" << endl;
        cout << "yes or no: ";
        cin >> choice;

        if (choice == "yes" || choice == "yes") {
            LP += recover;
            if (LP > max_LP) {
                LP = max_LP;
            }
            cout << "You rested. " << recover << " LP recovered." << endl << endl;
        } 
        
        else {
            cout << "You chose not to rest. Recovery halted." << endl;
            break; 
        }
    }
    
    if (LP == max_LP) {
        for (int i = 0; i < LP / 10; i++) {
            cout << current_LP;
        }
        cout << " LP: " << LP << "/" << max_LP << endl;
        cout << "LP fully recovered!" << endl;
    }

    return 0;
 
}
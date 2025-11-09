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
        // Draw 10 blocks, full and empty depending on HP
        
        for (int i=0 ; i < LP/10; i++) {
            cout << current_LP;
        }
        for (int i=0; i < (100-LP)/10; i++) {
            cout << missing_LP;
        }
        
        cout << " LP: " << LP << "/" << max_LP << endl;
    }
}
#include <iostream>
using namespace std;

int main()

{

    int LP = 30;
    int max_LP = 100;

    while (LP < max_LP) {
        LP = LP + 10;
        cout << "LP: " << LP << "/" << max_LP << endl;
    }
    cout << "LP full!" << endl;
}
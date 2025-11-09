/*
CSC134
M3T1 for CSC 134 online class
SethG
11/09/2025
This program will be a practice assignment for functions
*/

#include <iostream>
#include <string>
using namespace std;

string formatAnswer (int answer);
void printAnswer (string msg);

int main()

{
    
    int answer = 5;
    string message;
    message = formatAnswer (answer);
    printAnswer (message);
    return 0;
}

string formatAnswer (int answer) {
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string (answer);
    return answerMessage;
}

void printAnswer (string msg) {
    cout << msg << endl;
}
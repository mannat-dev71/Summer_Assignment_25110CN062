#include<iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "Q1. Capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n";
    cin >> answer;

    if(answer == 1)
        score++;

    cout << "\nQ2. 5 + 3 = ?\n";
    cout << "1. 6\n2. 8\n3. 10\n";
    cin >> answer;

    if(answer == 2)
        score++;

    cout << "\nQ3. C++ is a?\n";
    cout << "1. Programming Language\n2. Game\n3. Browser\n";
    cin >> answer;

    if(answer == 1)
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}
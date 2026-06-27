#include<iostream>
using namespace std;

int main() {
    int secret = 7, guess;

    cout << "Guess the number (1-10): ";
    cin >> guess;

    if(guess == secret)
        cout << "Correct! You guessed it.";
    else
        cout << "Wrong! The correct number is " << secret;

    return 0;
}
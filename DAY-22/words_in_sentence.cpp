#include<iostream>
using namespace std;

int main() {
    char str[100];
    int words = 1;

    cout << "Enter sentence: ";
    cin.getline(str,100);

    for(int i = 0; str[i]; i++) {
        if(str[i] == ' ')
            words++;
    }

    cout << "Words = " << words;

    return 0;
}
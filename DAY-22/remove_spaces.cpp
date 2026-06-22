#include<iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter sentence: ";
    cin.getline(str,100);

    for(int i = 0; str[i]; i++) {
        if(str[i] != ' ')
            cout << str[i];
    }

    return 0;
}
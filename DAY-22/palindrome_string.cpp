#include<iostream>
using namespace std;

int main() {
    char str[100];
    int len = 0;
    bool palindrome = true;

    cout << "Enter string: ";
    cin >> str;

    while(str[len])
        len++;

    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
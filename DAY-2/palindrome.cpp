#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0, rem;
 cin >> n;
 original=n;
while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;}

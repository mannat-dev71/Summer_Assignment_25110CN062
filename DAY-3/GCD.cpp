#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD = " << a;
    return 0;
}
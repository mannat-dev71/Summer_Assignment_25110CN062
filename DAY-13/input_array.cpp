#include<iostream>
using namespace std;

int main() {
    int arr[5];

    // Input array elements
    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
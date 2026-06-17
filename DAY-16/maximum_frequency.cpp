#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array= ";
    cin >> n;

    int arr[n];
    int count[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        int temp = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                temp++;
            }
        }

        count[i] = temp;
    }

    int maxFreq = count[0];
    int element = arr[0];

    for(int i = 1; i < n; i++) {
        if(count[i] > maxFreq) {
            maxFreq = count[i];
            element = arr[i];
        }
    }

    cout << "Most frequent element = " << element;

    return 0;
}
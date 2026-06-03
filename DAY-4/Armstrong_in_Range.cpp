#include<iostream>
using namespace std;

int main() {
    int lower, upper;
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;
    for(int i = lower; i <= upper; i++) {
        int temp = i;
        int sum = 0, r;
        while(temp > 0) {
            r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }

        if(sum == i) {
            cout << i << " ";
        }
    }

    return 0;
}
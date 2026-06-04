#include<iostream>
using namespace std;

int main() {
    int n, largestPrimeFactor = 0;

    cout << "Enter a number = ";
    cin >> n;
    for(int i = 2; i <= n; i++) {
        if(n % i == 0) {  
            int count = 0;

            for(int j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }
            if(count == 2) {  // i is prime
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}
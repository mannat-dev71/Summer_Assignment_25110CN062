#include<iostream>
using namespace std;

int isPrime(int n){
    if(n <= 1)
        return 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is Not Prime";

    return 0;
}
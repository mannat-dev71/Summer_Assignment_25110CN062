#include<iostream>
using namespace std;

int main() {
    char str[100];
    int count = 0;

    cout << "Enter string: ";
    cin >> str;

    while(str[count]){
        count++;}

    cout << "Length = " << count;

    return 0;
}
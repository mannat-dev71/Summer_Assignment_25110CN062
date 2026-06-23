#include<iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;

    for(int i=0; str[i]!='\0'; i++) {
        for(int j=i+1; str[j]!='\0'; j++) {
            if(str[i]==str[j]) {
                cout << "First repeating character = " << str[i];
                return 0;
            }
        }
    }

    return 0;
}
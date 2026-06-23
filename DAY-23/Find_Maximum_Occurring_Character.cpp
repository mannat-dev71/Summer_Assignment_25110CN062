#include<iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;

    int max=0;
    char ch;

    for(int i=0; str[i]!='\0'; i++) {
        int count=0;

        for(int j=0; str[j]!='\0'; j++) {
            if(str[i]==str[j]) {
                count++;
            }
        }

        if(count>max) {
            max=count;
            ch=str[i];
        }
    }

    cout << "Maximum occurring character = " << ch;

    return 0;
}
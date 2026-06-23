#include<iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cin >> str1;
    cin >> str2;

    int len1=0, len2=0;

    while(str1[len1]!='\0')
        len1++;

    while(str2[len2]!='\0')
        len2++;

    if(len1!=len2) {
        cout << "Not Anagram";
        return 0;
    }

    int count1[256]={0};
    int count2[256]={0};

    for(int i=0; str1[i]!='\0'; i++)
        count1[str1[i]]++;

    for(int i=0; str2[i]!='\0'; i++)
        count2[str2[i]]++;

    for(int i=0; i<256; i++) {
        if(count1[i]!=count2[i]) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}
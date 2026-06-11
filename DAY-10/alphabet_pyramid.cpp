#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size= ";
    cin >> n;

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout << ch++;
        }
        ch--;
        for(int j=0;j<i;j++){
            cout << --ch;
        }

        cout << endl;
    }

    return 0;
}
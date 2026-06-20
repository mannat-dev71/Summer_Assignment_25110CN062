#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    int flag = 1;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        cout << "Symmetric Matrix";
    else
        cout << "Not Symmetric Matrix";

    return 0;
}
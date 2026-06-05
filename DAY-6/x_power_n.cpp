#include<iostream>
using namespace std;

int main() {
    int x, n, ans = 1;

    cout << "Enter x = ";
    cin >> x;

    cout << "Enter n = ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        ans = ans * x;
    }

    cout << "Answer = " << ans << endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter n= ";
    cin>>n;
    for(char i='A';i<=n;i++){
        for(char j='A';j<=i;j++){
             cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
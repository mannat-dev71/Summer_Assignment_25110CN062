#include<iostream>
using namespace std;
int main(){
    int n ,a=0,b=1;
    cout<<"Enter number of terms= ";
    cin>>n;
    cout<<"Fibonacci Series is = ";
    for(int i=0;i<=n;i++){
        cout<<a;
        a=b;
        b=a+b;

    }return 0;
    
    
}
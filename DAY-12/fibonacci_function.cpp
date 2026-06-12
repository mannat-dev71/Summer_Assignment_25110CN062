#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0,b=1,c;
    for(int i=0;i<=n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
       
    }
     return 0;
}
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    fibonacci(n);
    return 0;
}
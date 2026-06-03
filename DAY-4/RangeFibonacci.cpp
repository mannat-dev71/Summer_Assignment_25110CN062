#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c,n;
    cout<<"Enter n = ";
    cin>>n;

    if(n==0){
        cout<<"Nth Fibonacci term will be= "<<a;
        return 0;
    }

    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }

    cout<<"Nth Fibonacci term will be= "<<b<<endl;
    return 0;
}
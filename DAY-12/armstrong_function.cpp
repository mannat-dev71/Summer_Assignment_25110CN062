#include<iostream>
using namespace std;
int armstrong(int n){
    int ans=0,temp,r;
    temp=n;
    while(n>0){
        r=n%10;
        ans=ans+(r*r*r);
        n=n/10;
    }if(temp==ans){
        cout<<"Number is Armstrong";
    }else{
        cout<<"Number is not armstrong";
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the value of n= ";
     cin>>n;
     armstrong(n);
     return 0;
}
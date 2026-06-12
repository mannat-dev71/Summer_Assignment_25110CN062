#include<iostream>
using namespace std;
int palindrome(int n){
    int r,rev=0,temp;
    temp=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }if(temp==rev){
        cout<<"Number is palindrome";
    }else{
        cout<<"Number is not palindrome";
    }
}
int main(){
    int n;
    cout<<"enter the num= ";
    cin>>n;
    palindrome(n);
    return 0;
}
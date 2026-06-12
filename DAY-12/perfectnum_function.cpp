#include<iostream>
using namespace std;
int perfectnum(int n){
    int r,sum=0;
    for(int i=1;i<n;i++){
r=n%i;
if(r==0){
    sum=sum+i;
}
}if(n==sum){
    cout<<"Number is perfect";
}else{
    cout<<"Number is not perfect";
}return 0;
}
int main(){
    int n;
    cout<<"Enter the Num= ";
cin>>n;
perfectnum(n);
}
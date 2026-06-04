#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    cout<<"Enter the Number= ";
    cin>>n;
    int Og=n;
    while(n>0){
        r=n%10;
        int temp=1;
        for(int i=1;i<=r;i++){
            temp=temp*i;
        }
        sum=sum+temp;
        n=n/10;
    }if(sum==Og){
        cout<<"Number is strong";
    }else{
        cout<<"Number is not strong";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n,r,count=0;
    cout<<"enter the number= ";
    cin>>n;
    for(int i=1;i<=n;i++){
      r=n%i;
      if(r==0){
        count++;
      }
    }if(count>2){
        cout<<"Number is Not Prime";
    }else{
        cout<<"Number is Prime";
    }
    return 0;
}
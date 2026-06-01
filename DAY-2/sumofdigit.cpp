#include<iostream>
using namespace std;
int main(){
int n,r,ans=0;
cin>>n;
while(n>0){
    r=n%10;
    ans+=r;
    n=n/10;
}cout<<"Sum Of Digit is= "<<ans<<endl;
return 0;
}
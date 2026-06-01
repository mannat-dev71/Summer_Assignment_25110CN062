#include<iostream>
using namespace std;
int main(){
    int n,r,ans=1;
    cin>>n;
    while(n>0){
        r=n%10;
        ans=ans*r;
        n=n/10;
    }cout<<"Product Of Digits is = "<<ans<<endl;
    return 0;
}
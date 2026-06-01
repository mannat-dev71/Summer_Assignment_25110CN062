#include<iostream>
using namespace std;
int main(){
    int n,r,ans=0;
    cin>>n;
    while(n>0){
        r=n%10;
        ans=ans*10+r;
        n=n/10;
    }cout<<"Reverse Of the Num is= "<<ans<<endl;
    return 0;
}
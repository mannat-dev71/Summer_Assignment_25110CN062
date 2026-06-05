#include<iostream>
using namespace std;
int main(){
    int n,r,count=0;
    cout<<"Enter the Number= ";
    cin>>n;
    while(n>0){
        r=n%2;
        if(r==1){
            count++;
        }
        n=n/2;
    }cout<<"Number of set bits is=  "<<count<<endl;
    return 0;
}
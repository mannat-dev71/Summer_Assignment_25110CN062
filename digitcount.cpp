#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n>=10){
            n=n/10;
            count++;
        }
    }cout<<"Number of digit is= "<<count<<endl;
    return 0;
}
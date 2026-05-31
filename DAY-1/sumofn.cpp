#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cin>>n;
    for(i=0;i<=n;i++){
    sum=sum+i;
    }
    cout<<"Sum of n natural number is = "<<sum<<endl;
    return 0;
}
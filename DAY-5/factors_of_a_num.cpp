#include<iostream>
using namespace std;
int main(){
int n,r;
cout<<"Enter the Number= ";
cin>>n;
for(int i=1;i<n;i++){
    r=n%i;
    if(r==0){
        cout<<i<<endl;
    }
}return 0;
}
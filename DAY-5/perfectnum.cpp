#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;
cout<<"Enter the Num= ";
cin>>n;
for(int i=1;i<n;i++){
r=n%i;
if(r==0){
    sum=sum+i;
}
}if(n==sum){
    cout<<"Number is perfect";
}else{
    cout<<"Number is not perfect";
}
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int DecNum,r,pow=1,ans=0;
    cout<<"Enter the DecNum= ";
    cin>>DecNum;
    while(DecNum>0){
        r=DecNum%2;
        DecNum=DecNum/2;
        ans=ans+(r*pow);
        pow=pow*10;
    }cout<<"Binary form will be= "<<ans<<endl;
    return 0;
}
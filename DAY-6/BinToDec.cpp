#include<iostream>
using namespace std; 
int main(){
    int pow=1,BinNum,r,ans=0;
    cout<<"Enter the BinNum= ";
    cin>>BinNum;
    while(BinNum>0){
        r=BinNum%10;
    BinNum=BinNum/10;
    ans=ans+(r*pow);
    pow=pow*2;
}cout<<"Decimal form will be= "<<ans<<endl;
return 0;
}
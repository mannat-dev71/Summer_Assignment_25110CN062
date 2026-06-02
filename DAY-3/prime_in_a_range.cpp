#include<iostream>
using namespace std;
int main(){
    int upper_limit,lower_limit,n,count,r;
    cout<<"Enter the Upper Limit= ";
    cin>>upper_limit;
    cout<<"Enter the Lower Limit= ";
    cin>>lower_limit;
  for(int i=lower_limit;i<=upper_limit;i++){
    count=0;
      for(int j=1;j<=i;j++){
        r=i%j;
        if(r==0){
        count++;
      }
      }if(count==2){
        cout<<i<<endl;
      }
}return 0;
}
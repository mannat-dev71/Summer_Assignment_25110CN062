#include<iostream>
using namespace std;
int main(){
    int n,ans;
    cout<<"Enter the value of n= ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter elements of array= ";
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"Number to be searched= ";
    cin>>ans;
    for(int i=0;i<n;i++){
        if(ans==arr[i]){
            cout<<"Number found";
        }
    }cout<<"number not found";
    return 0;

}
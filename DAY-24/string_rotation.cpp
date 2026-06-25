#include<iostream>
using namespace std;

int main(){
    string s1,s2;

    cin>>s1>>s2;

    string temp=s1+s1;

    if(temp.find(s2)!=-1)
        cout<<"Rotation";
    else
        cout<<"Not Rotation";

    return 0;
}
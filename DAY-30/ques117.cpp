#include<iostream>
using namespace std;

int main()
{
    int roll[5], marks[5], n;

    string name[5];

    cout<<"Enter number of students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Enter Roll: ";
        cin>>roll[i];

        cout<<"Enter Name: ";
        cin>>name[i];

        cout<<"Enter Marks: ";
        cin>>marks[i];
    }

    cout<<"\nStudent Records\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Roll: "<<roll[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Marks: "<<marks[i]<<endl;
    }

    return 0;
}
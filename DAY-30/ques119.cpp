#include<iostream>
using namespace std;

int main()
{
    int id[5], salary[5], n;
    string name[5];

    cout<<"Enter number of employees: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;

        cout<<"Enter ID: ";
        cin>>id[i];

        cout<<"Enter Name: ";
        cin>>name[i];

        cout<<"Enter Salary: ";
        cin>>salary[i];
    }

    cout<<"\nEmployee Details\n";

    for(int i=0;i<n;i++)
    {
        cout<<"ID: "<<id[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Salary: "<<salary[i]<<endl;
    }

    return 0;
}
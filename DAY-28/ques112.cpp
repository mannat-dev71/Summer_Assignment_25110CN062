#include<iostream>
using namespace std;

int main()
{
    int choice;
    string name="Rahul";
    long long phone=9876543210;

    cout<<"Contact Management System\n";
    cout<<"1. View Contact\n";
    cout<<"2. Add Contact\n";
    cout<<"3. Delete Contact\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Name : "<<name<<endl;
            cout<<"Phone : "<<phone;
            break;

        case 2:
            cout<<"Contact Added Successfully.";
            break;

        case 3:
            cout<<"Contact Deleted Successfully.";
            break;

        default:
            cout<<"Invalid Choice.";
    }

    return 0;
}
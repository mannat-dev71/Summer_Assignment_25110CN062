#include<iostream>
using namespace std;

int main()
{
    int choice;

    cout<<"Library Management System\n";
    cout<<"1. Issue Book\n";
    cout<<"2. Return Book\n";
    cout<<"3. Search Book\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Book Issued Successfully.";
            break;

        case 2:
            cout<<"Book Returned Successfully.";
            break;

        case 3:
            cout<<"Book Found in Library.";
            break;

        default:
            cout<<"Invalid Choice.";
    }

    return 0;
}
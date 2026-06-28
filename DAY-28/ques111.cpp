#include<iostream>
using namespace std;

int main()
{
    int choice;

    cout<<"Ticket Booking System\n";
    cout<<"1. Bus Ticket\n";
    cout<<"2. Train Ticket\n";
    cout<<"3. Flight Ticket\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Bus Ticket Booked.";
            break;

        case 2:
            cout<<"Train Ticket Booked.";
            break;

        case 3:
            cout<<"Flight Ticket Booked.";
            break;

        default:
            cout<<"Invalid Choice.";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int choice;
    float balance=10000, amount;

    cout<<"Bank Account System\n";
    cout<<"1. Deposit\n";
    cout<<"2. Withdraw\n";
    cout<<"3. Check Balance\n";
    cout<<"Enter choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter amount: ";
            cin>>amount;
            balance=balance+amount;
            cout<<"Updated Balance = "<<balance;
            break;

        case 2:
            cout<<"Enter amount: ";
            cin>>amount;

            if(amount<=balance)
            {
                balance=balance-amount;
                cout<<"Updated Balance = "<<balance;
            }
            else
            {
                cout<<"Insufficient Balance";
            }
            break;

        case 3:
            cout<<"Balance = "<<balance;
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}
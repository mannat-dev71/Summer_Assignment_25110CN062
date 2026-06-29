#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    cout<<"Enter a string: ";
    cin>>str;

    cout<<"\n1. Find Length";
    cout<<"\n2. Reverse";
    cout<<"\n3. Display";
    cout<<"\nEnter choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Length = "<<str.length();
            break;

        case 2:
            for(int i=str.length()-1;i>=0;i--)
                cout<<str[i];
            break;

        case 3:
            cout<<"String = "<<str;
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}
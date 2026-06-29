#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout << "\n1. Display";
    cout << "\n2. Sum";
    cout << "\n3. Maximum";
    cout << "\nEnter choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Array Elements:\n";
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            break;

        case 2:
        {
            int sum=0;
            for(int i=0;i<n;i++)
                sum=sum+a[i];
            cout<<"Sum = "<<sum;
            break;
        }

        case 3:
        {
            int max=a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]>max)
                    max=a[i];
            }
            cout<<"Maximum = "<<max;
            break;
        }

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}
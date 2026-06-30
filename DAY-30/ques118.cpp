#include<iostream>
using namespace std;

int main()
{
    string book[5];
    int n;

    cout<<"Enter number of books: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Book Name: ";
        cin>>book[i];
    }

    cout<<"\nAvailable Books\n";

    for(int i=0;i<n;i++)
    {
        cout<<book[i]<<endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string name;
    int quantity;
    float price;

    cout<<"Enter Item Name: ";
    cin>>name;

    cout<<"Enter Quantity: ";
    cin>>quantity;

    cout<<"Enter Price: ";
    cin>>price;

    cout<<"\n------ Inventory Details ------\n";
    cout<<"Item Name : "<<name<<endl;
    cout<<"Quantity  : "<<quantity<<endl;
    cout<<"Price     : "<<price<<endl;
    cout<<"Total Cost: "<<quantity*price<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int roll;
    char name[50];
    float marks;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n----- Student Record -----\n";
    cout << "Roll Number: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    if(marks >= 40)
        cout << "Result: Pass";
    else
        cout << "Result: Fail";

    return 0;
}
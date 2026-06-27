#include<iostream>
using namespace std;

int main() {
    int id;
    char name[50];
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Details -----\n";
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Salary: " << salary << endl;

    return 0;
}
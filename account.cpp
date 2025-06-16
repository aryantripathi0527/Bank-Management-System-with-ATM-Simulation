#include <iostream>
#include <fstream>
using namespace std;

void createAccount() {
    ofstream outFile("users.txt", ios::app);
    string name, pin;
    int accNo;
    float balance = 0;

    cout << "Enter Name: "; cin >> name;
    cout << "Enter Account Number: "; cin >> accNo;
    cout << "Set 4-digit PIN: "; cin >> pin;

    outFile << accNo << " " << name << " " << pin << " " << balance << endl;
    outFile.close();
    cout << "Account Created Successfully!\n";
}

void depositMoney() {
    // Simple function to demonstrate - can be expanded
    cout << "Deposit feature not yet implemented in this demo.\n";
}

void withdrawMoney() {
    // Simple function to demonstrate - can be expanded
    cout << "Withdraw feature not yet implemented in this demo.\n";
}

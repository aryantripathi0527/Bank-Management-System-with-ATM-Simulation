#include <iostream>
#include "account.cpp"
#include "atm_module.cpp"
using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "\n========= Bank Management System =========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. ATM Login\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: atmLogin(); break;
            case 5: cout << "Thank you for using our service.\n"; return 0;
            default: cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}

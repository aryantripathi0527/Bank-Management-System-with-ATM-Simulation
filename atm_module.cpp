#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void atmLogin() {
    int accNo;
    string pin, fileAccNo, fileName, filePin;
    float fileBalance;

    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter PIN: ";
    cin >> pin;

    ifstream inFile("users.txt");
    bool found = false;
    while (inFile >> fileAccNo >> fileName >> filePin >> fileBalance) {
        if (stoi(fileAccNo) == accNo && filePin == pin) {
            found = true;
            break;
        }
    }
    inFile.close();

    if (found) {
        cout << "Login Successful. Welcome, " << fileName << "!\n";
        cout << "Your balance is: Rs. " << fileBalance << endl;
    } else {
        cout << "Invalid credentials.\n";
    }
}

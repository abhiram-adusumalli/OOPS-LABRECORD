#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int accountNumber;
    string customerName;
    double accountBalance;

public:
    
    Account(int accNo, const string& name, double balance)
        : accountNumber(accNo), customerName(name), accountBalance(balance) {}

    void display() const {
        cout << "Account Number  : " << accountNumber << endl;
        cout << "Customer Name   : " << customerName << endl;
        cout << "Account Balance : " << "₹" << accountBalance << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Account acc1(1001, "Alice Johnson", 5000.75);
    Account acc2(1002, "Bob Smith", 12345.50);

    cout << "Account 1 Details:\n";
    acc1.display();

    cout << "Account 2 Details:\n";
    acc2.display();

    return 0;
}

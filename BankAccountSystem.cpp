#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    double balance;

public:
    BankAccount(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited successfully\n";
    }

    void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful\n";
        }
        else
            cout << "Insufficient balance\n";
    }

    void display() {
        cout << "Name: " << name << "\nAccount No: "
             << accNo << "\nBalance: " << balance << endl;
    }
};

int main() {

    BankAccount obj("Mausumi", 12345, 5000);

    obj.deposit(2000);
    obj.withdraw(1500);
    obj.display();

    return 0;
}

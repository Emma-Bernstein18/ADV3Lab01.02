// File: main.cpp
// Author: Emma Bernstein
// Description: Demonstrates polymorphism with Account hierarchy and Bank class

#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "Bank.h"

using namespace std;

int main() {
    cout << "Polymorphism Demo" << endl;

    Account* ptr;
    ptr = new SavingsAccount(101, 1000.0, 0.05);

    cout << "Savings Account Monthly Interest: "
         << ptr->monthlyInterest() << endl;

    ptr->deposit(200.0);
    ptr->withdraw(150.0);

    cout << "Savings Account Balance after transactions: "
         << ptr->getBalance() << endl;

    delete ptr;

    ptr = new CheckingAccount(102, 500.0, 100.0, 2.0);

    cout << "Checking Account Monthly Interest: "
         << ptr->monthlyInterest() << endl;

    ptr->deposit(100.0);
    ptr->withdraw(50.0);

    cout << "Checking Account Balance after transactions: "
         << ptr->getBalance() << endl;

    delete ptr;

    cout << "\nBank Class Demo:" << endl;

    Bank myBank;

    //Add multiple accounts
    myBank.addAccount(new SavingsAccount(201, 1000.0, 0.06));
    myBank.addAccount(new CheckingAccount(202, 800.0, 100.0, 2.0));
    myBank.addAccount(new SavingsAccount(203, 1500.0, 0.04));

    //Display all accounts before interest
    cout << "\nAccounts before monthly interest:" << endl;
    myBank.displayAccounts();

    //Post monthly interest
    myBank.postMonthlyInterest();

    //Display all accounts after interest
    cout << "\nAccounts after monthly interest:" << endl;
    myBank.displayAccounts();

    //Demonstrate deposits and withdrawals via Bank
    cout << "\nPerforming some transactions..." << endl;
    myBank.deposit(201, 500.0);    // Deposit to SavingsAccount
    myBank.withdraw(202, 100.0);   // Withdraw from CheckingAccount
    myBank.deposit(203, 200.0);    // Deposit to another SavingsAccount

    cout << "\nAccounts after transactions:" << endl;
    myBank.displayAccounts();

    //Bank destructor automatically cleans up all accounts
    return 0;
}

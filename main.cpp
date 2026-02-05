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

    //Base-class pointer to demonstrate polymorphism
    Account* ptr;

    //Point the Account pointer to a SavingsAccount object
    ptr = new SavingsAccount(101, 1000.0, 0.05);

    cout << "Savings Account Monthly Interest: "
         << ptr->monthlyInterest() << endl;

    //Deposit and withdraw using base-class pointer
    ptr->deposit(200.0);
    ptr->withdraw(150.0);

    //Display updated balance
    cout << "Savings Account Balance after transactions: "
         << ptr->getBalance() << endl;

    delete ptr;

    //Reuse pointer for a CheckingAccount object
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

    //Add different types of accounts to the bank
    myBank.addAccount(new SavingsAccount(201, 1000.0, 0.06));
    myBank.addAccount(new CheckingAccount(202, 800.0, 100.0, 2.0));
    myBank.addAccount(new SavingsAccount(203, 1500.0, 0.04));

    cout << "\nAccounts before monthly interest:" << endl;
    myBank.displayAccounts();

    //Apply monthly interest to all accounts
    myBank.postMonthlyInterest();

    cout << "\nAccounts after monthly interest:" << endl;
    myBank.displayAccounts();

    cout << "\nPerforming some transactions..." << endl;
    myBank.deposit(201, 500.0);    // Deposit to SavingsAccount
    myBank.withdraw(202, 100.0);   // Withdraw from CheckingAccount
    myBank.deposit(203, 200.0);    // Deposit to another SavingsAccount

    //Display final account balances
    cout << "\nAccounts after transactions:" << endl;
    myBank.displayAccounts();

    //Bank destructor deletes all accounts
    return 0;
}

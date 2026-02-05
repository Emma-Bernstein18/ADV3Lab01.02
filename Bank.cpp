// File: Bank.cpp
// Author: Emma Bernstein
// Description: Implementation of Bank class methods

#include "Bank.h"
#include <iostream>

using namespace std;

//default constructor
Bank::Bank() {}

Bank::~Bank() {
    for (Account* acc : accounts) {
        delete acc;
    }
}

//adds an account to the bank
void Bank::addAccount(Account* account) {
    accounts.push_back(account);
}

//applies monthly interest to all accounts
void Bank::postMonthlyInterest() {
    for (Account* acc : accounts) {
        double interest = acc->monthlyInterest();
        acc->deposit(interest);
    }
}

//deposits money into an account
bool Bank::deposit(int id, double amount) {
    for (Account* acc : accounts) {
        if (acc->getId() == id) {
            acc->deposit(amount);
            return true;
        }
    }
    return false;
}

//withdraws money from an account
bool Bank::withdraw(int id, double amount) {
    for (Account* acc : accounts) {
        if (acc->getId() == id) {
            acc->withdraw(amount);
            return true;
        }
    }
    return false;
}

//displays all accounts and their balances
void Bank::displayAccounts() const {
    for (Account* acc : accounts) {
        cout << "Account ID: " << acc->getId()
             << " | Balance: $" << acc->getBalance()
             << endl;
    }
}

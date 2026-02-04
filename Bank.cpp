// File: Bank.h
// Author: Emma Bernstein
// Description: Bank class that manages multiple accounts and applies monthly interest

#include "Bank.h"

#include <iostream>

using namespace std;

Bank::Bank() {}

Bank::~Bank() {
    for (Account* acc : accounts) {
        delete acc;
    }
}

void Bank::addAccount(Account* account) {
    accounts.push_back(account);
}

void Bank::postMonthlyInterest() {
    for (Account* acc : accounts) {
        double interest = acc->monthlyInterest();
        acc->deposit(interest);
    }
}

bool Bank::deposit(int id, double amount) {
    for (Account* acc : accounts) {
        if (acc->getId() == id) {
            acc->deposit(amount);
            return true;
        }
    }
    return false;
}

bool Bank::withdraw(int id, double amount) {
    for (Account* acc : accounts) {
        if (acc->getId() == id) {
            acc->withdraw(amount);
            return true;
        }
    }
    return false;
}

void Bank::displayAccounts() const {
    for (Account* acc : accounts) {
        cout << "Account ID: " << acc->getId()
             << " | Balance: $" << acc->getBalance()
             << endl;
    }
}

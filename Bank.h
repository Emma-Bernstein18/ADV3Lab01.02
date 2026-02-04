// File: Bank.cpp
// Author: Emma Bernstein
// Description: Implementation of Bank class methods

#ifndef ADV3LAB01_02_BANK_H
#define ADV3LAB01_02_BANK_H
#include <vector>
#include "Account.h"

class Bank {
private:
    std::vector<Account*> accounts;

public:
    Bank();
    ~Bank();

    void addAccount(Account* account);

    void postMonthlyInterest();

    bool deposit(int id, double amount);
    bool withdraw(int id, double amount);

    void displayAccounts() const;
};

#endif //ADV3LAB01_02_BANK_H
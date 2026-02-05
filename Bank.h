// File: Bank.h
// Author: Emma Bernstein
#ifndef ADV3LAB01_02_BANK_H
#define ADV3LAB01_02_BANK_H
#include <vector>
#include "Account.h"

class Bank {
private:
    //stores pointers to account objects
    std::vector<Account*> accounts;

public:
    Bank();
    ~Bank();

    // adds a new account to the bank
    void addAccount(Account* account);

    //applies monthly interest to all accounts
    void postMonthlyInterest();

    bool deposit(int id, double amount);
    bool withdraw(int id, double amount);

    //displays all accounts
    void displayAccounts() const;
};

#endif //ADV3LAB01_02_BANK_H

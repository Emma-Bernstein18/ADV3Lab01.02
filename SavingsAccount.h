// File: SavingsAccount.h
// Author: Emma Bernstein

#ifndef ADV3LAB01_02_SAVINGSACCOUNT_H
#define ADV3LAB01_02_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    double interestRate;   // Annual interest rate

public:
    // Constructor
    SavingsAccount(int id, double balance, double interestRate);

    // Overrides base-class interest calculation
    double monthlyInterest() override;
};

#endif //ADV3LAB01_02_SAVINGSACCOUNT_H

// File: SavingsAccount.h
// Author: Emma Bernstein
// Description: Derived class for savings accounts with interest rate

#ifndef ADV3LAB01_02_SAVINGSACCOUNT_H
#define ADV3LAB01_02_SAVINGSACCOUNT_H


#include "Account.h"

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int id, double balance, double interestRate);

    double monthlyInterest() override;
};



#endif //ADV3LAB01_02_SAVINGSACCOUNT_H
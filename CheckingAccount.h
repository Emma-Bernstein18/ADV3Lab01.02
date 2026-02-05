// File: CheckingAccount.h
// Author: Emma Bernstein

#ifndef ADV3LAB01_02_CHECKINGACCOUNT_H
#define ADV3LAB01_02_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
private:
    double minBal;
    double checkCharge;

public:
    //constructor
    CheckingAccount(int idNum, double balance, double minBal, double checkCharge);
    double monthlyInterest() override;
};

#endif //ADV3LAB01_02_CHECKINGACCOUNT_H

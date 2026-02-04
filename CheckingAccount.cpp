// File: CheckingAccount.cpp
// Author: Emma Bernstein
// Description: Implementation of CheckingAccount methods

#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(int idNum, double balance,
                                 double minBal, double checkCharge)
    : Account(idNum, balance), minBal(minBal), checkCharge(checkCharge) {
}

double CheckingAccount::monthlyInterest() {
    if (getBalance() < minBal) {
        return 0.0;
    }
    return getBalance() * (0.01 / 12);
}

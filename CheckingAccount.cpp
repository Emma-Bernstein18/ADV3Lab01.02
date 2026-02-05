// File: CheckingAccount.cpp
// Author: Emma Bernstein
// Description: Implementation of CheckingAccount methods

#include "CheckingAccount.h"

//initializes base Account and checking values
CheckingAccount::CheckingAccount(int idNum, double balance,
                                 double minBal, double checkCharge)
    : Account(idNum, balance), minBal(minBal), checkCharge(checkCharge) {
}

//calculates interest only if balance meets requirement
double CheckingAccount::monthlyInterest() {
    if (getBalance() < minBal) {
        return 0.0;
    }
    return getBalance() * (0.01 / 12);
}

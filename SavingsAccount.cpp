// File: SavingsAccount.cpp
// Author: Emma Bernstein
// Description: Implementation of SavingsAccount methods

#include "SavingsAccount.h"

//initializes base account and interest rate
SavingsAccount::SavingsAccount(int id, double bal, double IR)
    : Account(id, bal), interestRate(IR) {
}

//calculates monthly interest based on annual interest rate
double SavingsAccount::monthlyInterest() {
    return getBalance() * (interestRate / 12);
}

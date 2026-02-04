// File: SavingsAccount.cpp
// Author: Emma Bernstein
// Description: Implementation of SavingsAccount methods

#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(int id, double bal, double IR)
    : Account(id, bal), interestRate(IR) {
}

double SavingsAccount::monthlyInterest() {
    return getBalance() * (interestRate / 12);
}


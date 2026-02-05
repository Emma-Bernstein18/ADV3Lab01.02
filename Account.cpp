// File: Account.cpp
// Author: Emma Bernstein
// Description: Implementation of base Account class methods

#include "Account.h"
#include <iostream>

using namespace std;

//initializes account ID and starting balance
Account::Account(int id, double bal) : idNum(id), balance(bal) {
}

int Account::getId() {
    return idNum;
}

double Account::getBalance()  {
    return balance;
}

// Deposit function
void Account::deposit(double amount) {
    if (amount >= 0) {
        balance += amount;
    }
    else{
        cout << "Deposit must be positive." << endl;
    }
}

// Withdraw function
void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
    }
    else{
        cout << "Withdraw amount must be less than balance amount." << endl;
    }
}

double Account::monthlyInterest() {
    return 0.0;
}

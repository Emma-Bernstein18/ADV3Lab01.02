// File: Account.h
// Author: Emma Bernstein
// Description: Abstract base class for bank accounts

#ifndef ADV3LAB01_02_ACCOUNT_H
#define ADV3LAB01_02_ACCOUNT_H


class Account {
private:
    int idNum;
    double balance;

public:
    Account(int id, double balance);
    virtual ~Account() {}
    int getId();
    double getBalance();
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    virtual double monthlyInterest();
};


#endif //ADV3LAB01_02_ACCOUNT_H
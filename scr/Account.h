//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_ACCOUNT_H
#define BANK_OF_MAC_ACCOUNT_H

#include <iostream>
#include "Transaction.h"
#include "Date.h"

using namespace std;

class Account {

private:
    string accountType;
    Date openDate;
    double balance;
public:
    void setBalance(double balance);

private:
    int transactionsCount;
    Transaction transactions[0];
public:
    Account(string a, double b, Date open);

    Account();

    string getAccountType() { return accountType; };

    void setAccounntType(string a) { accountType = a; };

    double getBalance() { return balance; };

    virtual void printAccount() = 0;
    //   virtual void printAccountTransactions();
};

#endif //BANK_OF_MAC_ACCOUNT_H

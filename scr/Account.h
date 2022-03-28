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
    string accountNumberID;
    Date openDate;
    double balance;

    int transactionsCount;
    Transaction transactions[0];

public:


    const string &getAccountType() const;

    void setAccountType(const string &accountType);

    const string &getAccountNumberId() const;

    void setAccountNumberId(const string &accountNumberId);

    const Date &getOpenDate() const;

    void setOpenDate(const Date &openDate);

    int getTransactionsCount() const;

    void setTransactionsCount(int transactionsCount);

    double getBalance() const;

    void createNumberID();

    void setBalance(double balance);

    Account();

    //
//    virtual void printAccount();
//    virtual void printAccountTransactions();

};

#endif //BANK_OF_MAC_ACCOUNT_H

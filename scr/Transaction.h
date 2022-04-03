//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_TRANSACTION_H
#define BANK_OF_MAC_TRANSACTION_H
#pragma once

#include "Date.h"
#include <string>

using namespace std;

class Transaction {


private:
    string transactionType;
    double balanceAmount;
    Date transactionDate;
    string transactionDescription;

public:

    Transaction();

    Transaction(bool isDeposit, double amount, string description);

    Transaction(bool isDeposit, double amount, string description, Date transDate);


    const string &getTransactionType() const;

    void setTransactionType(const string &transactionType);

    double getBalanceAmount() const;

    void setBalanceAmount(double amount);

    const string getTransactionDate() const;

    void setTransactionDate(const Date &transactionDate);

    const string &getTransactionDesciption() const;

    void setTransactionDesciption(const string &transactionDesciption);

    string toString();
};


#endif //BANK_OF_MAC_TRANSACTION_H

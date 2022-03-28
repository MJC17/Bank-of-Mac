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

    int AccountID;
    Date transactionDate;
    string transactionDesciption;

    double accountBalanceAmount;
    double WithdrawalAmount;
    double depositsAmount;

public:

    int getAccountId(){return AccountID;};

    void setAccountId(int accountId);

    Date getTransactionDate(){return transactionDate;};

    void setTransactionDate(Date &transactionDate);

    string getTransactionDesciption(){return transactionDesciption};

    void setTransactionDesciption(string &transactionDesciption);

    double getAccountBalanceAmount(){return accountBalanceAmount};

    void setAccountBalanceAmount(double accountBalanceAmount);

    double getWithdrawalAmount(){return WithdrawalAmount;};

    void setWithdrawalAmount(double withdrawalAmount);

    double getDepositsAmount(){return depositsAmount;};

    void setDepositsAmount(double depositsAmount);
};


#endif //BANK_OF_MAC_TRANSACTION_H

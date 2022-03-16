//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_TRANSACTION_H
#define BANK_OF_MAC_TRANSACTION_H

#include "Date.h"
#include "Time.h"
#include <string>

using namespace std;

class Transaction {

private:

    int AccountID;

    Date transactionDate;
    Time transactionTime;
    string transactionDescription;

    double accountBalanceAmount;
    double WithdrawalAmount;
    double depositsAmount;

public:

    int getAccountId() const;

    void setAccountId(int accountId);

    const Date &getTransactionDate() const;

    void setTransactionDate(const Date &transactionDate);

    const Time &getTransactionTime() const;

    void setTransactionTime(const Time &transactionTime);

    const string &getTransactionDescription() const;

    void setTransactionDescription(const string &transactionDescription);

    double getAccountBalanceAmount() const;

    void setAccountBalanceAmount(double accountBalanceAmount);

    double getWithdrawalAmount() const;

    void setWithdrawalAmount(double withdrawalAmount);

    double getDepositsAmount() const;

    void setDepositsAmount(double depositsAmount);




};


#endif //BANK_OF_MAC_TRANSACTION_H

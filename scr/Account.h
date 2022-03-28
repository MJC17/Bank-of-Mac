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

    int transactionsCount = 0;
    Transaction transactions[0];

public:

    const string &getAccountType() const;

    void setAccountType(const string &accountType);

    string getOpenDate() const;

    void setOpenDate(const Date &openDate);

    int getTransactionsCount() const;

    double getBalance() const;

    void createNumberID();

    Account();

    string transactionHistroyDatabasePrint();

    void addNewTransactios(Transaction t);

    void recalculateAccountBalance();

};

#endif //BANK_OF_MAC_ACCOUNT_H

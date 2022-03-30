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
    string accountID;

    Date openDate;
    double balance;

    int transactionsCount = 0;
    Transaction transactions[25];

public:

    const string &getAccountType() const;

    void setAccountType(const string &accountType);

    string getOpenDate() const;

    void setOpenDate(const Date &openDate);

    int getTransactionsCount() const;

    double getBalance() const;

    Account();

    Account(double currentBalance, Date openedDate, string ID);

    string transactionHistroyDatabasePrint();

    void addNewTransactios(Transaction t);

    virtual string printAccount();

    void recalculateAccountBalance();

    virtual void getAccountInfo();

    const string &getAccountId() const;

    void setAccountId(const string &accountId);


    void createAccountID();

};

#endif //BANK_OF_MAC_ACCOUNT_H

//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_ACCOUNT_H
#define BANK_OF_MAC_ACCOUNT_H

#include <iostream>
#include "Transaction.h"
#include "BankClient.h"
#include "Date.h"

using namespace std;

class Account {

private:

    int ClientID;
    int accountID;

    string accountType;

    Date penDate;

    double Currentbalance;

    int transactionsCount = 0;
    Transaction transactions[0];


public:

    Account();
    Account(string accountType, Date openDate, double balance);

};

#endif //BANK_OF_MAC_ACCOUNT_H

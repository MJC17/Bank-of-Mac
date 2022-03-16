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
    string transactionDesciption;

    double accountBalanceAmount;
    double WithdrawalAmount;
    double depositsAmount;

public:




};


#endif //BANK_OF_MAC_TRANSACTION_H

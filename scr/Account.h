//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_ACCOUNT_H
#define BANK_OF_MAC_ACCOUNT_H

#include <iostream>
#include "Transaction.h"

using namespace std;
#include "BankClient.h"
#include "Date.h"
class Account {

private:
    string m_accountType;
    Date m_openDate;
    /*int accountOpenDay;
    int accountOpenMonth;
    int accountOpenYear;*/
    double m_currentBalance;
    int m_transactionsCount;
    Transaction transactions[];
public:
    Account();
    Account(string accountType, Date openDate, double balance);
    virtual void printAccount();
};

#endif //BANK_OF_MAC_ACCOUNT_H

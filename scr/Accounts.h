//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_ACCOUNTS_H
#define BANK_OF_MAC_ACCOUNTS_H
#include <iostream>
#include "Transaction.h"

using namespace std;
class Account{

private:

    string accountType;

    string m_openDate;
    int accountOpenDay;
    int accountOpenMonth;
    int accountOpenYear;

    double m_currentBalance;
    int transactionsCount;
    Transaction transactions[];





public:
    Account();
    Account(string openDate, double balance);

};


#endif //BANK_OF_MAC_ACCOUNTS_H

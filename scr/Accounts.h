//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_ACCOUNTS_H
#define BANK_OF_MAC_ACCOUNTS_H
#include <iostream>
using namespace std;
class Account{
    string m_openDate;
    double m_balance;
    double m_initialBalance;
    double m_maxWithdrawl;
public:
    Account()
    Account(string date, double balance, double initialBalance, double maxWithdrawl);
    virtual void print() = 0;
};


#endif //BANK_OF_MAC_ACCOUNTS_H

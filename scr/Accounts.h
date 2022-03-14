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
public:
    Account();
    Account(string openDate, double balance);
    void setOpenDate(string openDate){m_openDate = openDate;};
    void setBalance(double balance){m_balance = balance;};
    string getOpenDate(){return m_openDate;};
    double getBalance(){return m_balance;};
    virtual void print() = 0;
};


#endif //BANK_OF_MAC_ACCOUNTS_H

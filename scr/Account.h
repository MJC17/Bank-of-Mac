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
    double m_balance;
    int m_transactionsCount;
    Transaction transactions[];
public:
    Account();
    Account(string accountType, Date openDate, double balance);
    void setAccountType(string a){m_accountType = a;};
    void setOpenDate(Date w){m_openDate = w;};
    void setBalance(double balance){m_balance = balance;};
    string getAccountType(){return m_accountType;};
    Date getOpenDate(){return m_openDate;};
    double getBalance(){return m_balance;};
    virtual void printAccount();
};

#endif //BANK_OF_MAC_ACCOUNT_H

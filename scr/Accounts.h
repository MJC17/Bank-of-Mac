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
    string m_firstName;
    string lastName;

    string m_birthDate;
    int birthDay;
    int brithMonth;
    int brithYear;

    string m_openDate;
    int accountOpenDay;
    int accountOpenMonth;
    int accountOpenYear;


    double m_currentBalance;
    int transactionsCount;
    Transaction[] transactions;





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

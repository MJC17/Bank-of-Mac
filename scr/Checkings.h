//
// Created by Matthew Arias on 2022-03-16.
//

#ifndef BANK_OF_MAC_CHECKINGS_H
#define BANK_OF_MAC_CHECKINGS_H
#include "Account.h"

class Checkings: public Account
{
    double m_withdrawalAmount;
private:

    Checkings();
    Checkings(string accountType, double balance, double witdrawalAmount);
    void setWithdrawlAmount(double w){m_withdrawalAmount = w;};
//    double getWithdrawlAmount(){return m_withdrawalAmount;};
    void deposit(double d);
    void withdrawal(double w);
//    double getBalance();
//    void printAccount();
};


#endif //BANK_OF_MAC_CHECKINGS_H

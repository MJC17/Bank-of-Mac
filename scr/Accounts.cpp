//
// Created by Marcus Cameron on 2022-03-14.
//
#include "Accounts.h"
Account::Account()
{
    m_openDate = "";
    m_balance = 0.0;
    m_initialBalance = 0.0;
    m_maxWithdrawl = 0.0;
}
Account::Account(string openDate, double balance, double initialBalance, double maxWithdrawl)
{
    m_openDate = openDate;
    m_balance = balance;
    m_initialBalance = initialBalance;
    m_maxWithdrawl = maxWithdrawl;
}

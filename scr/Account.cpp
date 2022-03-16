//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
{
    m_accountType = "";
    m_balance = 0;
    m_transactionsCount = 0;
}

Account::Account(string accountType, Date openDate, double balance)
{
    m_accountType = accountType;
    m_openDate = openDate;
    m_balance = balance;
    m_transactionsCount = 0;
}
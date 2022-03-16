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

Account::Account(string accountType)
{
    m_accountType = accountType;
    m_balance = 0;
    m_transactionsCount = 0;
}
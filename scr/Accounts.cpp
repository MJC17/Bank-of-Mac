//
// Created by Marcus Cameron on 2022-03-14.
//
#include "Accounts.h"
Account::Account()
{
    m_openDate = "";
    m_balance = 0.0;
}
Account::Account(string openDate, double balance)
{
    m_openDate = openDate;
    m_balance = balance;
}

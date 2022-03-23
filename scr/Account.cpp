//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Account.h"
#include <iostream>
using namespace std;


Account::Account(string a, double b, Date open)
{
    accountType = a;
    balance = b;
    openDate = open;
}
Account::Account()
{
    accountType = "";
    balance = 0.0;
    transactionsCount = 0;
}

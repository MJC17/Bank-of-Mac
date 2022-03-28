//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Account.h"
#include <iostream>

using namespace std;

Account::Account() {


    accountType = "";
    balance = 0.0;

}


double Account::getBalance() const {
    return balance;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

void Account::createNumberID() {

}

const string &Account::getAccountType() const {
    return accountType;
}

void Account::setAccountType(const string &accountType) {
    Account::accountType = accountType;
}

const string &Account::getAccountNumberId() const {
    return accountNumberID;
}

void Account::setAccountNumberId(const string &accountNumberId) {
    accountNumberID = accountNumberId;
}

const Date &Account::getOpenDate() const {
    return openDate;
}

void Account::setOpenDate(const Date &openDate) {
    Account::openDate = openDate;
}

int Account::getTransactionsCount() const {
    return transactionsCount;
}

void Account::setTransactionsCount(int transactionsCount) {
    Account::transactionsCount = transactionsCount;
}

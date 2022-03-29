//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Account.h"
#include "Transaction.h"
#include <iostream>

using namespace std;


Account::Account() {

    transactionsCount = 0;
    balance = 0.0;
    openDate = Date();
    createNumberID();

}

double Account::getBalance() const {
    return balance;
}


void Account::createNumberID() {


}

const string &Account::getAccountType() const {
    return accountType;
}

void Account::setAccountType(const string &accountType) {
    Account::accountType = accountType;
}

string Account::getOpenDate() const {

    return this->openDate.toString();
}

void Account::setOpenDate(const Date &openDate) {
    Account::openDate = openDate;
}

int Account::getTransactionsCount() const {
    return transactionsCount;
}

string Account::transactionHistroyDatabasePrint() {

    string printOut;

    for (int tranIndex = 0; tranIndex < transactionsCount; tranIndex++) {

        printOut = printOut + transactions[tranIndex].toString();

    }

    return printOut;
}


void Account::addNewTransactios(Transaction t) {

    transactions[transactionsCount] = t;
    transactionsCount++;

    recalculateAccountBalance();
}

void Account::recalculateAccountBalance() {

    balance = 0.0;

    for (int tranIndex = 0; tranIndex < transactionsCount; tranIndex++) {

        balance = balance + transactions[tranIndex].getBalanceAmount();

    }
}

void Account::getAccountInfo() {

}


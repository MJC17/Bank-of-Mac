//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Account.h"
#include "Transaction.h"
#include <iostream>

using namespace std;


Account::Account() {

//    transactionsCount = 0;
    balance = 0.0;
    openDate = Date();
}

Account::Account(double currentBalance, Date openedDate, string ID) {

    balance = currentBalance;
    openDate = openedDate;
    accountID = ID;
}

double Account::getBalance() const {
    return balance;
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

        printOut = printOut + transactions[tranIndex].toString() + "\n";

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

string Account::printAccount() {

    return getAccountType() + "\t" + getAccountId() + "\t" + std::to_string(getBalance()) + "\t" + getOpenDateString() + "\t";
}

void Account::setAccountId(const string &accountId) {

    accountID = accountId;
}

const string &Account::getAccountId() const {

    return accountID;
}

void Account::createAccountID() {

    accountID = accountType.substr(0, 1) + "-";

    for (int i = 0; i < 8; i++) {

        int num = rand() % 10;
        accountID = accountID + std::to_string(num);

    }
}

string Account::getOpenDateString() const {
    return openDate.toString();
}



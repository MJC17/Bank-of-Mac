//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Account.h"
#include "Transaction.h"
#include <iostream>

using namespace std;


Account::Account() {

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

void Account::printAccountInfo() {
    cout << "Type\t\tID\t\t\t\tAmount\t\tOpened Date" << endl;

    cout.precision(2);
    cout << getAccountType() << "\t";
    cout << getAccountId() << "\t\t";
    cout << fixed << getBalance() << "\t\t";
    cout << getOpenDateString() + "\n\n";

    cout << "Transaction History:" << endl;
    cout << "\tType\t\t\tAmount\t\tDescription\t\t\tDate of Transaction" << endl;


    for (int tranIndex = 0; tranIndex < transactionsCount; tranIndex++) {

        if (transactions[tranIndex].getTransactionType() == "Deposit") {
            cout << "\tDeposit   ";

        } else {
            cout << "\tWithdrawal";
        }

        cout.precision(2);
        cout << "\t\t" << fixed << transactions[tranIndex].getBalanceAmount();
        cout << "\t\t" << transactions[tranIndex].getTransactionDesciption();
        cout << "\t\t\t" << transactions[tranIndex].getTransactionDate() << endl;


    }

}



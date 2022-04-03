//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Transaction.h"


Transaction::Transaction() {}

Transaction::Transaction(bool isDeposit, double amount, string description) {

    if (isDeposit) {

        transactionType = "Deposit";
        balanceAmount = amount;

    } else {
        transactionType = "Withdrawal";
        balanceAmount = amount * -1;

    }

    transactionDescription = description;
    transactionDate = Date();

}

Transaction::Transaction(bool isDeposit, double amount, string description, Date transDate) {
    if (isDeposit) {

        transactionType = "Deposit";
        balanceAmount = amount;

    } else {
        transactionType = "Withdrawal";
        balanceAmount = amount * -1;

    }

    transactionDescription = description;
    transactionDate = transDate;
}


const string &Transaction::getTransactionType() const {
    return transactionType;
}

void Transaction::setTransactionType(const string &transactionType) {
    Transaction::transactionType = transactionType;
}

double Transaction::getBalanceAmount() const {
    return balanceAmount;
}

void Transaction::setBalanceAmount(double amount) {
    Transaction::balanceAmount = amount;
}

const string Transaction::getTransactionDate() const {
    return transactionDate.toString();
}

void Transaction::setTransactionDate(const Date &transactionDate) {
    Transaction::transactionDate = transactionDate;
}

const string &Transaction::getTransactionDesciption() const {
    return transactionDescription;
}

void Transaction::setTransactionDesciption(const string &transactionDesciption) {
    Transaction::transactionDescription = transactionDesciption;
}

string Transaction::toString() {
    return transactionType + "\t" + std::to_string(balanceAmount) + "\t" + transactionDescription + "\t" + getTransactionDate();
}


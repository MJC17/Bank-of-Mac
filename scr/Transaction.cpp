//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Transaction.h"


int Transaction::getAccountId() const {
    return AccountID;
}

void Transaction::setAccountId(int accountId) {
    AccountID = accountId;
}

const Date &Transaction::getTransactionDate() const {
    return transactionDate;
}

void Transaction::setTransactionDate(const Date &transactionDate) {
    Transaction::transactionDate = transactionDate;
}

const Time &Transaction::getTransactionTime() const {
    return transactionTime;
}

void Transaction::setTransactionTime(const Time &transactionTime) {
    Transaction::transactionTime = transactionTime;
}

const string &Transaction::getTransactionDesciption() const {
    return transactionDesciption;
}

void Transaction::setTransactionDesciption(const string &transactionDesciption) {
    Transaction::transactionDesciption = transactionDesciption;
}

double Transaction::getAccountBalanceAmount() const {
    return accountBalanceAmount;
}

void Transaction::setAccountBalanceAmount(double accountBalanceAmount) {
    Transaction::accountBalanceAmount = accountBalanceAmount;
}

double Transaction::getWithdrawalAmount() const {
    return WithdrawalAmount;
}

void Transaction::setWithdrawalAmount(double withdrawalAmount) {
    WithdrawalAmount = withdrawalAmount;
}

double Transaction::getDepositsAmount() const {
    return depositsAmount;
}

void Transaction::setDepositsAmount(double depositsAmount) {
    Transaction::depositsAmount = depositsAmount;
}

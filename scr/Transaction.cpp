//
// Created by Marcus Cameron on 2022-03-14.
//

#include "Transaction.h"


void Transaction::setAccountId(int accountId) {
    AccountID = accountId;
}

void Transaction::setTransactionDate(Date &transactionDate) {
    Transaction::transactionDate = transactionDate;
}


void Transaction::setTransactionDesciption(string &transactionDesciption) {
    Transaction::transactionDesciption = transactionDesciption;
}


void Transaction::setAccountBalanceAmount(double accountBalanceAmount) {
    Transaction::accountBalanceAmount = accountBalanceAmount;
}


void Transaction::setWithdrawalAmount(double withdrawalAmount) {
    WithdrawalAmount = withdrawalAmount;
}


void Transaction::setDepositsAmount(double depositsAmount) {
    Transaction::depositsAmount = depositsAmount;
}

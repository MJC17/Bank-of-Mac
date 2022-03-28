//
// Created by Matthew Arias on 2022-03-16.
//

#include "Checkings.h"


//Checkings::Checkings(string accountType, double balance, Date open, double witdrawalAmount): Account(accountType, balance, open)
//{
//    m_withdrawalAmount = witdrawalAmount;
//}

void Checkings::deposit(double d) {
    Checkings::setBalance(Checkings::getBalance() + d);
}

void Checkings::withdrawal(double w) {
    Checkings::setBalance(Checkings::getBalance() - w);
}

void Checkings::printAccount() {
    cout << "Your student checkings account has an updated balance of $" << Checkings::getBalance() << "." << endl;
}

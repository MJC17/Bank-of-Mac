//
// Created by Matthew Arias on 2022-03-16.
//

#include "Checkings.h"


Checkings::Checkings(string accountType, double balance, double witdrawalAmount): Account(accountType, balance)
{
    m_withdrawalAmount = witdrawalAmount;
}

void Checkings::deposit(double d)
{
//    double addition = Account::getBalance() + d;
//    Account::setBalance(addition);
}

void Checkings::withdrawal(double w)
{
//    double subtract = Account::getBalance() - w;
//    Account::setBalance(subtract);
}
//void Checkings::printAccount()
//{
//    cout<<"Your student checkings account has an updated balance of $"<<Checkings::getBalance()<<"."<<endl;
//}

Checkings::Checkings() {

}

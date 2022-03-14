//
// Created by Matthew Arias on 2022-03-14.
//
#include "Loan.h"
Loan::Loan()
{
    m_amountLoaned = 0.0;
    m_interestRate = 0.0;
    m_amountOwed = 0.0;
    m_dueDate = "";

}
Loan::Loan(string openDate, double balance, double amountLoaned string dueDate, double interestRate, double amountOwed): Account(openDate, balance)
{
    m_amountLoaned = amountLoaned;
    m_interestRate = interestRate;
    m_dueDate = dueDate;
    m_amountOwed = amountOwed;
}
void Loan::calculateInterest()
{
    double total = Account::getBalance()*((m_interestRate/100)+1);
    m_amountOwed = total;
}
void print()
{
    cout<<"Loan amount: "<<
    cout<<"Loan Start date: "<<Account::getOpenDate()<<endl;
    cout<<""
}
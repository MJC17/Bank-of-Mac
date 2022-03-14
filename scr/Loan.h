//
// Created by Matthew Arias on 2022-03-14.
//

#ifndef BANK_OF_MAC_LOAN_H
#define BANK_OF_MAC_LOAN_H
#include "Accounts.h"
#include <iostream>
using namespace std;
#endif //BANK_OF_MAC_LOAN_H
class Loan: public Account
{
    double m_interestRate;
    double m_amountOwed;
    string m_dueDate;
    double m_amountLoaned;
public:
    Loan();
    Loan(string openDate, double balance, double amountLoaned, string dueDate, double interestRate, double amountOwed);
    void setLoanAmount(double loanAmount){m_amountLoaned = loanAmount;};
    void setAmountOwed(double owing){m_amountOwed = owing;};
    void setDueDate(string due){m_dueDate = due;};
    void interestRate(double rate){m_interestRate = rate;};
    double getInterestRate(){return m_interestRate;};
    double getAmountOwed(){return m_amountOwed;};
    string getDueDate(){return m_dueDate;};
    double getAmountLoaned(){return m_amountLoaned;};
    void calculateInterest();
    void print();
};
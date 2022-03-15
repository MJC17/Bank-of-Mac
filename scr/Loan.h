//
// Created by Matthew Arias on 2022-03-14.
//

#ifndef BANK_OF_MAC_LOAN_H
#define BANK_OF_MAC_LOAN_H
#include "Accounts.h"
#include <iostream>
using namespace std;
#endif //BANK_OF_MAC_LOAN_H
class Loan
{
    double m_interestRate;
    string m_dueDate;
    double m_amountLoaned;
public:
    Loan();
    Loan(double amountLoaned, string dueDate, double interestRate);
    void setLoanAmount(double loanAmount){m_amountLoaned = loanAmount;};
    void setDueDate(string due){m_dueDate = due;};
    void interestRate(double rate){m_interestRate = rate;};
    double getInterestRate(){return m_interestRate;};
    string getDueDate(){return m_dueDate;};
    double getAmountLoaned(){return m_amountLoaned;};
    virtual void printLoan();
    double calculateInterest();
};
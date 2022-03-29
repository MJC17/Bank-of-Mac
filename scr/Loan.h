//
// Created by Matthew Arias on 2022-03-14.
//

#ifndef BANK_OF_MAC_LOAN_H
#define BANK_OF_MAC_LOAN_H
#pragma once
#include "Account.h"
#include <iostream>
#include "Date.h"

using namespace std;
#endif //BANK_OF_MAC_LOAN_H

class Loan {
    string loanType;
    double m_interestRate;
    Date m_dueDate;
    double m_amountLoaned;

public:
    Loan(string type, double amountLoaned, Date dueDate, double interestRate);

    void setLoanAmount(double loanAmount) { m_amountLoaned = loanAmount; };

    void setDueDate(Date due) { m_dueDate = due; };

    void interestRate(double rate) { m_interestRate = rate; };

    double getInterestRate() { return m_interestRate; };

    Date getDueDate() { return m_dueDate; };

    double getAmountLoaned() { return m_amountLoaned; };

    virtual void getLoanInfo() = 0;

    virtual void calculatePayment() = 0;
};
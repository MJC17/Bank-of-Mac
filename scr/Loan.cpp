//
// Created by Matthew Arias on 2022-03-14.
//
#include "Loan.h"
#include "Date.h"

Loan::Loan(string type, double amountLoaned, Date dueDate, double interestRate) {
    m_amountLoaned = amountLoaned;
    interestRate = interestRate;
    m_dueDate = dueDate;
    loanType = type;
}

string Loan::getDueDate() {
    return this->m_dueDate.toString();
}

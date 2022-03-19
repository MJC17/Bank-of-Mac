//
// Created by Matthew Arias on 2022-03-14.
//
#include "Loan.h"
#include "Date.h"

Loan::Loan() {
    m_amountLoaned = 0.0;
    m_interestRate = 0.0;
    m_dueDate = Date();

}

Loan::Loan(double amountLoaned, Date dueDate, double interestRate) {
    m_amountLoaned = amountLoaned;
    m_interestRate = interestRate;
    m_dueDate = dueDate;
}

void Loan::printLoan() {

}
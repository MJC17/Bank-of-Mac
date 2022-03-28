//
// Created by Matthew Arias on 2022-03-14.
//
#include "Loan.h"
#include "Date.h"

Loan::Loan(double amountLoaned, Date dueDate, double interestRate) {
    m_amountLoaned = amountLoaned;
    m_interestRate = interestRate;
    m_dueDate = dueDate;
}

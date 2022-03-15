//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_MORTGAGE_H
#define BANK_OF_MAC_MORTGAGE_H
#include "Loan.h"

class Mortgage : public Loan{
    double m_monthlyPayment;
public:
    Mortgage();
    Mortgage(double amountLoaned, string dueDate, double interestRate, double monthlyPayment);
    double getMonthlyPayment(){return m_monthlyPayment;};
    void setMonthlyPayment(double m){m_monthlyPayment = m;};
    void printLoan();
    double calculateInterest();

};


#endif //BANK_OF_MAC_MORTGAGE_H

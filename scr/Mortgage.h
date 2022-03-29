//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_MORTGAGE_H
#define BANK_OF_MAC_MORTGAGE_H
#include "Loan.h"
#pragma once
class Mortgage : public Loan {

    double m_monthlyPayment;
    int m_mortgageLength;

public:

    ~Mortgage();

    Mortgage(string type, double amountLoaned, Date dueDate, double interestRate, double monthlyPayment, int yearsLength);

    double getMonthlyPayment(){return m_monthlyPayment;};

    void setMonthlyPayment(double m){m_monthlyPayment = m;};

    int getMortgageLength(){return m_mortgageLength;};

    void setMortgageLength(int l){m_mortgageLength = l;};

    void getLoanInfo();

    double calculateTotal();

    void calculatePayment();
};


#endif //BANK_OF_MAC_MORTGAGE_H

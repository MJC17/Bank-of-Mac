//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_MORTGAGE_H
#define BANK_OF_MAC_MORTGAGE_H
#include "Loan.h"

class Mortgage : public Loan{
    double m_monthlyPayment;
    int m_mortgageLength;
public:
    Mortgage();
    Mortgage(double amountLoaned, string dueDate, double interestRate, double monthlyPayment, int yearsLength);
    double getMonthlyPayment(){return m_monthlyPayment;};
    void setMonthlyPayment(double m){m_monthlyPayment = m;};
    int getMortgageLength(){return m_mortgageLength;};
    void setMortgageLength(int l){m_mortgageLength = l;};
    void printLoan();
    double calculateTotal();
    void calculateMonthlyPayment();

};


#endif //BANK_OF_MAC_MORTGAGE_H

//
// Created by Matthew Arias on 2022-03-15.
//

#include "Mortgage.h"

Mortgage::~Mortgage() {

}

Mortgage::Mortgage(string type, double amountLoaned, Date dueDate, double interestRate, double monthlyPayment, int yearsLength) : Loan(type, amountLoaned, dueDate, interestRate) {
    m_monthlyPayment = monthlyPayment;
    m_mortgageLength = yearsLength;
}

double Mortgage::calculateTotal() {
    double total = getAmountLoaned() * ((getInterestRate() / 100) + 1);
    return total;
}

void Mortgage::calculatePayment() {
    m_monthlyPayment = (calculateTotal() / m_mortgageLength) / 12;
}

void Mortgage::printLoan() {
    cout << "Total mortgage is valued at $" << getAmountLoaned() << "." << endl;
    cout << "The interest rate is " << getInterestRate() << "%" << endl;
//    cout<<"A grand total of "<<Mortgage::calculateTotal() << " is to be repaid by " << Mortgage::getDueDate()\ << "." <<endl;
}


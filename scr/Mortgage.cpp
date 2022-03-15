//
// Created by Matthew Arias on 2022-03-15.
//

#include "Mortgage.h"
Mortgage::Mortgage()
{
    m_monthlyPayment = 0.0;
}
Mortgage::Mortgage(double amountLoaned, string dueDate, double interestRate, double monthlyPayment): Loan(amountLoaned, dueDate, interestRate)
{
    m_monthlyPayment = monthlyPayment;
}
double Mortgage::calculateInterest()
{
    double total = getAmountLoaned()*((getInterestRate()/100)+1);
    return total;
}
void Mortgage::printLoan()
{
    cout<<"Total mortgage is valued at $"<<getAmountLoaned()<<"."<<endl;
    cout<<"The interest rate is "<<getInterestRate()<<"%"<<endl;
    cout<<"A grand total of "<<Mortgage::calculateInterest()<<" is to be repaid by "<<getDueDate()<<"."<<endl;
}
//
// Created by Matthew Arias on 2022-03-15.
//

#include "Mortgage.h"
Mortgage::Mortgage()
{
    m_monthlyPayment = 0.0;
}
Mortgage::Mortgage(double amountLoaned, Date dueDate, double interestRate, double monthlyPayment, int yearsLength): Loan(amountLoaned, dueDate, interestRate)
{
    m_monthlyPayment = monthlyPayment;
}
double Mortgage::calculateTotal()
{
    double total = getAmountLoaned()*((getInterestRate()/100)+1);
    return total;
}
void Mortgage::calculateMonthlyPayment()
{
    m_monthlyPayment = (calculateTotal()/m_mortgageLength)/12;
}
void Mortgage::printLoan()
{
    cout<<"Total mortgage is valued at $"<<getAmountLoaned()<<"."<<endl;
    cout<<"The interest rate is "<<getInterestRate()<<"%"<<endl;
//    cout<<"A grand total of "<<Mortgage::calculateTotal() << " is to be repaid by " << getDueDate() << "." <<endl;
}


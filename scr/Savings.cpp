//
// Created by Matthew Arias on 2022-03-15.
//

#include "Savings.h"
#include <math.h>
Savings::Savings()
{
    m_growthRate = 0.0;
    m_investment = 0.0;
}
Savings::Savings(string accountType, Date openDate, double balance, double growthRate, double investment): Account(accountType,openDate,balance)
{
    m_growthRate = growthRate;
    m_investment = investment;
}
double Savings::calculateFutureValue(int x)
{
    //for compound interest: Future value = investment(1+(growth rate/100))^# of compounding periods per year
    double total;
    double v = 1+(getGrowthRate()/100);
    total = m_investment*pow(v,x);
}
void Savings::printAccount()
{
    cout<<"Your long term savings account currently has a balance of $"<<getInvestment()<<"."<<endl;
    cout<<"Your investment will grow at a"<<getGrowthRate()<<"% rate, compounded annually."<<endl;
}
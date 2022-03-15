//
// Created by Matthew Arias on 2022-03-15.
//

#include "Savings.h"
Savings::Savings()
{
    m_growthRate = 0.0;
    m_compoundPeriod = 0;
    m_investment = 0.0;
}
Savings::Savings(string accountType, Date openDate, double balance, double growthRate, string compoundPeriod, double investment): Account(accountType,openDate,balance)
{
    m_growthRate = growthRate;
    m_compoundPeriod = compoundPeriod;
    m_investment = investment;
}
double Savings::calculateFutureValue(int x)
{
    //Future value = investment(1+(growth rate/100))^# of compounding periods per year
    for (int i  = 0; i < x; i++)
    {

    }
}
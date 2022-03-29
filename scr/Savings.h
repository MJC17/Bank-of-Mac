//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_SAVINGS_H
#define BANK_OF_MAC_SAVINGS_H

#include <iostream>

using namespace std;

#include "Account.h"

#pragma once

class Savings : public Account {

    double m_growthRate;
    int m_compoundPeriod;
    double m_investment;

public:

    Savings();

    double getGrowthRate() { return m_growthRate; };

    int getCompoundPeriod() { return m_compoundPeriod; };

    double getInvestment() { return m_investment; };

    void setGrowthRate(double g) { m_growthRate = g; };

    void setCompoundPeriod(int c) { m_compoundPeriod = c; };

    void setInvestment(double i) { m_investment = i; };

    double calculateFutureValue(int x);   //user will input the number of compounding periods
    void getAccountInfo();
};

#endif //BANK_OF_MAC_SAVINGS_H

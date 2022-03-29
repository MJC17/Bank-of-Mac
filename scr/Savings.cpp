//
// Created by Matthew Arias on 2022-03-15.
//

#include "Savings.h"
#include <math.h>

Savings::Savings() : Account() {

    setAccountType("Saving");
}

double Savings::calculateFutureValue(int x) {
    //for compound interest: Future value = investment(1+(growth rate/100))^# of compounding periods per year
    double total;
    double v = 1 + (getGrowthRate() / 100);
    total = m_investment * pow(v, x);
    return total;
}

void Savings::getAccountInfo() {
    cout << "Your long term savings account currently has a balance of $" << getInvestment() << "." << endl;
    cout << "Your investment will grow at a" << getGrowthRate() << "% rate, compounded annually." << endl;
}
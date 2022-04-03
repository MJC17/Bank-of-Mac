//
// Created by Matthew Arias on 2022-03-15.
//

#include "Savings.h"
#include <math.h>

Savings::Savings() : Account() {

    setAccountType("Savings");
    createAccountID();

}

Savings::Savings(double currentBalance, Date openedDate, string ID) : Account(currentBalance, openedDate, ID) {

    setAccountType("Savings");
    setAccountId(ID);
}

double Savings::calculateFutureValue(int x) {
    //for compound interest: Future value = investment(1+(growth rate/100))^# of compounding periods per year
    double total;
    double v = 1 + (getGrowthRate() / 100);
    total = m_investment * pow(v, x);
    return total;
}

//void Savings::getAccountInfo() {
//
//
//
//}
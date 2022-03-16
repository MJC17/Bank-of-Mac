//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_CREDITCARD_H
#define BANK_OF_MAC_CREDITCARD_H

#include "Loan.h"
class CreditCard: public {
    double m_monthlyLimit;
public:
    CreditCard();
    CreditCard(double amountLoaned, Date dueDate, double interestRate, double monthlyLimit);
};


#endif //BANK_OF_MAC_CREDITCARD_H

//
// Created by Matthew Arias on 2022-03-16.
//

#ifndef BANK_OF_MAC_CHECKINGS_H
#define BANK_OF_MAC_CHECKINGS_H

#include "Account.h"

#pragma once

class Checkings : public Account {

private:
    double m_withdrawalAmount;


public:
    Checkings();
};


#endif //BANK_OF_MAC_CHECKINGS_H

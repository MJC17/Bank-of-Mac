//
// Created by Matthew Arias on 2022-03-16.
//

#include "Checkings.h"
#include "Account.h"


Checkings::Checkings() : Account() {

    setAccountType("Checking");
    createAccountID();

}

Checkings::Checkings(double currentBalance, Date openedDate, string ID) : Account(currentBalance, openedDate, ID) {

    setAccountType("Checking");
    setAccountId(ID);

}

void Checkings::getAccountInfo() {
    cout << "Your checkings account has a balance of $" << Checkings::getBalance() << endl;
}


//
// Created by Matthew Arias on 2022-03-16.
//

#include "Checkings.h"
#include "Account.h"


Checkings::Checkings() : Account() {

    setAccountType("Checking");

}

void Checkings::getAccountInfo() {
    cout<<"Your checkings account has a balance of $"<<Checkings::getBalance()<<endl;
}
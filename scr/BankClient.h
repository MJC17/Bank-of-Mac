//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_BANKCLIENT_H
#define BANK_OF_MAC_BANKCLIENT_H

#include <string>

#include "Account.h"
#include "CreditCard.h"
#include "Date.h"
//#include "Loan.h"

using namespace std;

class BankClient {

private:

    string clientFirstName;
    string clientLastName;
    string clientEmailAddress;
    int clientPhoneNumber;

    Date m_clientBirthDate;
//
//    int loanCount = 0;
//    Loan clientActiveLoan[5];

    int accountCount = 0;
    Account clientActiveAccount[5];

    int clientCreditCardCount = 0;
    CreditCard clientActiveCreditCard[5];


public:

    BankClient(string FName, string LName, int phone, Date DOB);
};


#endif //BANK_OF_MAC_BANKCLIENT_H

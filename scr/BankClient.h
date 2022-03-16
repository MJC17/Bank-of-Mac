//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_BANKCLIENT_H
#define BANK_OF_MAC_BANKCLIENT_H

#include <string>
#include "Account.h"
#include "Date.h"
#include "Loan.h"
using namespace std;


class BankClient {

private:

    string clientFirstName;
    string clientLastName;
    int clientPhoneNumber;
    Date m_clientBirthDate;

    int loanCount;
    Loan clientActiveLoan[loanCount];

    int accountCount;
    Account clientActiveAccount[o];

public:
    BankClient();
    BankClient(string FName, string LName, int phone, Date DOB);
};


#endif //BANK_OF_MAC_BANKCLIENT_H

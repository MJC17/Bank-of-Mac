//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_BANKCLIENT_H
#define BANK_OF_MAC_BANKCLIENT_H

#include <string>
#include "Account.h"

using namespace std;


class BankClient {

private:

    string clientFirstName;
    string clientLastName;
    int clientPhoneNumber;


    string m_clientBirthDate;
    int clientBirthDay;
    int clientBrithMonth;
    int clientBrithYear;

    string m_openDate;
    int accountOpenDay;
    int accountOpenMonth;
    int accountOpenYear;

    int accountCount;
    Account clientActiveAccount[accountCount];

public:


};


#endif //BANK_OF_MAC_BANKCLIENT_H

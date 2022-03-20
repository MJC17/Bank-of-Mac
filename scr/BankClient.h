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
    string clientPassword;
    string clientNumberID;
    string clientPhoneNumber;

    Date clientBirthDate;

    int loanCount = 0;
    Loan clientActiveLoan[5];

    int accountCount = 0;
    Account clientActiveAccount[5];

    int clientCreditCardCount = 0;
    CreditCard clientActiveCreditCard[5];

public:

    BankClient();

    BankClient(string FName, string LName, string emailAddress, string password, string phone, Date DOB);

    const string &getClientPassword() const;

    const string &getClientFirstName() const;

    const string &getClientLastName() const;

    const string &getClientEmailAddress() const;

    string getClientPhoneNumber() const;

    const string &getClientNumberId() const;

    const Date &getClientBirthDate() const;

    int getLoanCount() const;

    int getAccountCount() const;

    int getClientCreditCardCount() const;

    void getAccounts(Account *accountList);

    void setClientNumberId(const string &clientNumberId);
};


#endif //BANK_OF_MAC_BANKCLIENT_H

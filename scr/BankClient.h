//
// Created by Marcus Cameron on 2022-03-14.
//

#ifndef BANK_OF_MAC_BANKCLIENT_H
#define BANK_OF_MAC_BANKCLIENT_H

#include <string>

#include "Account.h"
//#include "CreditCard.h"
#include "Date.h"
#include "Loan.h"
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

    int accountCount = 0;
    Account clientActiveAccount[5];
    //int clientCreditCardCount = 0;
    //CreditCard clientActiveCreditCard[5];

public:

    BankClient();

    BankClient(string FName, string LName, string emailAddress, string password, string phone);

    BankClient(string FName, string LName, string emailAddress, string password, string numID, string phoneNum);

    const string &getClientPassword() const;

    const string &getClientFirstName() const;

    const string &getClientLastName() const;

    const string &getClientEmailAddress() const;

    string getClientPhoneNumber() const;

    const string &getClientNumberId() const;

    int getAccountCount() const;

    void getAccounts(Account *accountList);

    void setClientNumberId(const string &clientNumberId);

    void addNewAccount(Account newAccount);

    void printAccounts();

    Account *getAccount(int index);

};


#endif //BANK_OF_MAC_BANKCLIENT_H

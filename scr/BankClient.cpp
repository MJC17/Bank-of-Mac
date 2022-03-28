//
// Created by Marcus Cameron on 2022-03-14.
//

#include "BankClient.h"
#include "Checkings.h"
#include <iostream>
#include <string>

using namespace std;


BankClient::BankClient(string FName, string LName, string emailAddress, string password, string phoneNum) {

    clientFirstName = FName;
    clientLastName = LName;
    clientEmailAddress = emailAddress;
    clientPassword = password;
    clientPhoneNumber = phoneNum;

    addNewAccount(Checkings());
    addNewAccount(Checkings());
    addNewAccount(Checkings());


}


const string &BankClient::getClientPassword() const {
    return clientPassword;
}

const string &BankClient::getClientFirstName() const {
    return clientFirstName;
}

const string &BankClient::getClientLastName() const {
    return clientLastName;
}

const string &BankClient::getClientEmailAddress() const {
    return clientEmailAddress;
}

string BankClient::getClientPhoneNumber() const {
    return clientPhoneNumber;
}

const string &BankClient::getClientNumberId() const {
    return clientNumberID;
}

int BankClient::getLoanCount() const {
    return loanCount;
}

int BankClient::getAccountCount() const {
    return accountCount;
}

/*int BankClient::getClientCreditCardCount() const {
    return clientCreditCardCount;
}*/

void BankClient::getAccounts(Account *accountList) {

    for (int accIndex = 0; accIndex < accountCount; accIndex++) {

        accountList[accIndex] = clientActiveAccount[accIndex];

    }

}

void BankClient::setClientNumberId(const string &clientNumberId) {
    clientNumberID = clientNumberId;
}

void BankClient::addNewAccount(Account newAccount) {

    accountCount++;
    clientActiveAccount[accountCount - 1] = newAccount;

}

BankClient::BankClient() {

}


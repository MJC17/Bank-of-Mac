//
// Created by Marcus Cameron on 2022-03-14.
//

#include "BankClient.h"
#include <iostream>
#include <string>

using namespace std;


BankClient::BankClient() {


}

BankClient::BankClient(string FName, string LName, string emailAddress, string password, string phoneNum, Date DOB) {

    clientFirstName = FName;
    clientLastName = LName;
    clientEmailAddress = emailAddress;
    clientPassword = password;
    clientPhoneNumber = phoneNum;
    clientBirthDate = DOB;

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

const Date &BankClient::getClientBirthDate() const {
    return clientBirthDate;
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


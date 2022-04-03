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

}

BankClient::BankClient(string FName, string LName, string emailAddress, string password, string numID, string phoneNum) {

    clientFirstName = FName;
    clientLastName = LName;
    clientEmailAddress = emailAddress;
    clientPassword = password;
    clientNumberID = numID;
    clientPhoneNumber = phoneNum;


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


int BankClient::getAccountCount() const {
    return accountCount;
}

void BankClient::setClientNumberId(const string &clientNumberId) {
    clientNumberID = clientNumberId;
}

void BankClient::addNewAccount(Account newAccount) {

    clientActiveAccount[accountCount] = newAccount;
    accountCount++;

}

BankClient::BankClient() {

}

void BankClient::printAccounts() {

    cout << "\tID\t\t\t\tType\t\t\tBalance" << endl;

    for (int accIndex = 0; accIndex < accountCount; accIndex++) {

        cout.precision(2);
        cout << accIndex + 1 << ")\t";
        cout << clientActiveAccount[accIndex].getAccountId() + "\t\t";
        cout << clientActiveAccount[accIndex].getAccountType() + " \t\t";
        cout << fixed << clientActiveAccount[accIndex].getBalance() << endl;
    }

}

Account *BankClient::getAccount(int index) {

    return &clientActiveAccount[index - 1];
}


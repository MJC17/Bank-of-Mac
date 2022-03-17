//
// Created by Marcus Cameron on 2022-03-14.
//

#include "BankClient.h"
#include <iostream>
using namespace std;



BankClient::BankClient() {




}

BankClient::BankClient(string FName, string LName, string emailAddress, string password, int phone, Date DOB) {

    clientFirstName = FName;
    clientLastName = LName;
    clientEmailAddress = emailAddress;
    client
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

int BankClient::getClientPhoneNumber() const {
    return clientPhoneNumber;
}





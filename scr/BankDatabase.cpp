//
// Created by Marcus Cameron on 2022-03-16.
//

#include <iostream>
#include "BankDatabase.h"

BankDatabases::BankDatabases() {

//    cout << "Testing" << endl;
    loadClientData();

}

bool BankDatabases::verifyClient(string emailAddress, string password) {

    for(int i = 0; i < bankCliendCount; i++){

        if (currentClients[i].getClientEmailAddress() == emailAddress && currentClients[i].getClientPassword() == password ){

            return true;
        }

    }

    return false;
}

void BankDatabases::getVerifedBankClient(string emailAddress, string password, BankClient& VerifedBankClient) {


    for(int i = 0; i < bankCliendCount; i++){

        if (currentClients[i].getClientEmailAddress() == emailAddress && currentClients[i].getClientPassword() == password ){

            VerifedBankClient = currentClients[i];
        }

    }
}

string BankDatabases::encryptionPassword(string password) {
    return std::string();
}

string BankDatabases::dencryptionPassword(string encryptionPassword) {
    return std::string();
}

void BankDatabases::loadClientData() {

    BankClient temp = BankClient("Marcus", "Cameron", "Test", "Test", 3234232, Date());
    addNewClient(temp);

//    cout << temp.getClientEmailAddress() << endl;
}

void BankDatabases::saveClientData() {

}

void BankDatabases::addNewClient(BankClient newClient) {

    bankCliendCount++;
    currentClients[0] = newClient;

}

void BankDatabases::removeClient(BankClient Client) {

}

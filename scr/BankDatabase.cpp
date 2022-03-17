//
// Created by Marcus Cameron on 2022-03-16.
//

#include <iostream>
#include "BankDatabase.h"

BankDatabases::BankDatabases() {
    std::cout << "testing";
}

bool BankDatabases::verifyClient(string emailAddress, string password) {
    return false;
}

BankClient BankDatabases::getVerifedBankClient(string emailAddress, string password) {


}

string BankDatabases::encryptionPassword(string password) {
    return std::string();
}

string BankDatabases::dencryptionPassword(string encryptionPassword) {
    return std::string();
}

void BankDatabases::loadClientData() {

}

void BankDatabases::saveClientData() {

}

void BankDatabases::addNewClient(BankClient newClient) {

}

void BankDatabases::removeClient(BankClient Client) {

}

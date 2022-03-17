//
// Created by Marcus Cameron on 2022-03-16.
//

#ifndef BANK_OF_MAC_BANK_H
#define BANK_OF_MAC_BANK_H

#include "BankClient.h"

class BankDatabases {

private:

    int bankCliendCount = 0;
    BankClient currentClients[100];
    const string encryptionKey = "";

public:

    BankDatabases();

    bool verifyClient(string emailAddress, string password);

    void getVerifedBankClient(string emailAddress, string password, BankClient& VerifedBankClient);

    string encryptionPassword(string password);

    string dencryptionPassword(string encryptionPassword);

    void loadClientData();

    void saveClientData();

    void addNewClient(BankClient newClient);

    void removeClient(BankClient Client);


};


#endif //BANK_OF_MAC_BANK_H

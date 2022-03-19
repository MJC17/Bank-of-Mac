//
// Created by Marcus Cameron on 2022-03-16.
//

#ifndef BANK_OF_MAC_BANK_H
#define BANK_OF_MAC_BANK_H


#include "BankClient.h"

class BankDatabases {

private:

    int bankCliendCount = 0;
    BankClient clientDataList[100];
    const string encryptionKey = "";

public:

    BankDatabases();

    bool verifyClient(string emailAddress, string password);

    BankClient *getVerifedBankClient(string emailAddress, string password);

    string encryptionPassword(string password);

    string dencryptionPassword(string encryptionPassword);

    void loadAllData();

    void saveAllData();

    void addNewClient(BankClient newClient);

    void removeClient(BankClient Client);


};


#endif //BANK_OF_MAC_BANK_H

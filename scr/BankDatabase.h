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

    bool ValidateNewLogin(BankClient newClientCredentials);

    void loadAllData();

    void saveAllData();

    void addNewClientToDatabase(BankClient newClient);


    void loadAccountTransaction(Account *currentLoadingAccount, fstream *OUTFILE);

    string createClientNumberID();
};


#endif //BANK_OF_MAC_BANK_H

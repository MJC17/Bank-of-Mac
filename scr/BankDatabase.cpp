//
// Created by Marcus Cameron on 2022-03-16.
//

#include <iostream>
#include <fstream>
#include "BankDatabase.h"

BankDatabases::BankDatabases() {

//    cout << "Testing" << endl;
    srand(time(0));
    loadAllData();
    saveAllData();


}

bool BankDatabases::verifyClient(string emailAddress, string password) {

    for (int i = 0; i < bankCliendCount; i++) {

        if (clientDataList[i].getClientEmailAddress() == emailAddress &&
            clientDataList[i].getClientPassword() == password) {

            return true;
        }

    }

    return false;
}

BankClient *BankDatabases::getVerifedBankClient(string emailAddress, string password) {

    for (int i = 0; i < bankCliendCount; i++) {

        if (clientDataList[i].getClientEmailAddress() == emailAddress &&
            clientDataList[i].getClientPassword() == password) {

            return &clientDataList[i];

        }
    }

    return 0;
}

string BankDatabases::encryptionPassword(string password) {
    return std::string();
}

string BankDatabases::dencryptionPassword(string encryptionPassword) {
    return std::string();
}

void BankDatabases::loadAllData() {

    BankClient temp = BankClient("Marcus", "Cameron", "Test", "Test", "3234232", Date());
    addNewClient(temp);

    BankClient temp1 = BankClient("Admin", "Admin", "Admin", "Test", "3234232", Date());
    addNewClient(temp1);

}

void BankDatabases::saveAllData() {

    fstream DataFile = fstream("Data.txt", ios::out);


    if (DataFile) {

        DataFile << bankCliendCount << endl;

        for (int clientIndex = 0; clientIndex < bankCliendCount; clientIndex++) {

            DataFile << clientDataList[clientIndex].getClientFirstName() << "\t";
            DataFile << clientDataList[clientIndex].getClientLastName() << "\t";
            DataFile << clientDataList[clientIndex].getClientEmailAddress() << "\t";
            DataFile << clientDataList[clientIndex].getClientPassword() << "\t";
            DataFile << clientDataList[clientIndex].getClientNumberId() << "\t";
            DataFile << clientDataList[clientIndex].getClientPhoneNumber() << "\t";

            Date clientDOB = clientDataList[clientIndex].getClientBirthDate();
            DataFile << clientDOB.toString();

            DataFile << endl;


            DataFile << clientDataList[clientIndex].getAccountCount() << endl;

            Account clientAccounts[clientDataList[clientIndex].getAccountCount()];
            clientDataList[clientIndex].getAccounts(clientAccounts);

            for (int accIndex = 0; accIndex < clientDataList[clientIndex].getAccountCount(); accIndex++) {

//                clientAccounts[accIndex].

            }

        }

    } else {
        cout << "Error: Could not find Data.txt" << endl;
    }

    DataFile.close();

}

void BankDatabases::addNewClient(BankClient newClient) {

    newClient.setClientNumberId(createClientNumberID());

    bankCliendCount++;
    clientDataList[bankCliendCount - 1] = newClient;

}

void BankDatabases::removeClient(BankClient Client) {

}

string BankDatabases::createClientNumberID() {

    string clientNumberID;

    for (int i = 0; i < 10; i++) {

        int num = rand() % 10;
        clientNumberID = clientNumberID + std::to_string(num);

    }

    if (bankCliendCount != 0) {

        for (int i = 0; i < bankCliendCount - 1; i++) {

            if (clientDataList[i].getClientNumberId() == clientNumberID) {

                return createClientNumberID();
            }
        }
    }
    return clientNumberID;

}

//
// Created by Marcus Cameron on 2022-03-16.
//

#include <iostream>
#include <fstream>
#include "BankDatabase.h"

BankDatabases::BankDatabases() {

//    cout << "Testing" << endl;
    loadAllData();
    saveAllData();

}

bool BankDatabases::verifyClient(string emailAddress, string password) {

    for(int i = 0; i < bankCliendCount; i++){

        if (clientDataList[i].getClientEmailAddress() == emailAddress && clientDataList[i].getClientPassword() == password ){

            return true;
        }

    }

    return false;
}

BankClient* BankDatabases::getVerifedBankClient(string emailAddress, string password) {

    for(int i = 0; i < bankCliendCount; i++){

        if (clientDataList[i].getClientEmailAddress() == emailAddress && clientDataList[i].getClientPassword() == password ){

            return &clientDataList[i];

        }
    }
}

string BankDatabases::encryptionPassword(string password) {
    return std::string();
}

string BankDatabases::dencryptionPassword(string encryptionPassword) {
    return std::string();
}

void BankDatabases::loadAllData() {

    BankClient temp = BankClient("Marcus", "Cameron", "Test", "Test", 3234232, Date());
    addNewClient(temp);

    BankClient temp1 = BankClient("Admin", "Admin", "Admin", "Test", 3234232, Date());
    addNewClient(temp1);

}

void BankDatabases::saveAllData() {

    fstream databaseFile = fstream("ClientData.txt", ios::out);

    if (databaseFile){

        databaseFile << bankCliendCount << endl;


        for(int i = 0; i < bankCliendCount; i++){

            databaseFile << clientDataList[i].getClientFirstName() << "\t";
            databaseFile << clientDataList[i].getClientLastName() << "\t";
            databaseFile << clientDataList[i].getClientEmailAddress() << "\t";
            databaseFile << clientDataList[i].getClientPassword() << "\t";
            databaseFile << clientDataList[i].getClientNumberId()<< "\t";
            databaseFile << clientDataList[i].getClientPhoneNumber() << "\t";

            Date clientDOB = clientDataList[i].getClientBirthDate();
            databaseFile << clientDOB.getDay() << "/";
            databaseFile << clientDOB.getMonth() << "/";
            databaseFile << clientDOB.getYear() << "\t";

            databaseFile << endl;

        }

    } else {
        cout << "Error: Could not find ClientData.txt" << endl;
    }


    databaseFile.close();

}

void BankDatabases::addNewClient(BankClient newClient) {

    bankCliendCount++;
    clientDataList[bankCliendCount - 1] = newClient;

}

void BankDatabases::removeClient(BankClient Client) {

}


//
// Created by Marcus Cameron on 2022-03-16.
//

#include <iostream>
#include <fstream>
#include "BankDatabase.h"
#include "Checkings.h"

BankDatabases::BankDatabases() {

//    cout << "Testing" << endl;
    srand(time(0));
    loadAllData();
//    saveAllData();

    BankClient temp = BankClient("Marcus", "Cameron", "Test", "Test", "3234232");
    addNewClient(temp);

    BankClient temp1 = BankClient("Admin", "Admin", "Admin", "Test", "3234232");
    addNewClient(temp1);

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

    fstream DataFile = fstream("Data.txt", ios::in);


    if (DataFile) {

        int clientCount;
        DataFile >> clientCount;

        for (int clientIndex = 0; clientIndex < clientCount; clientIndex++) {

            string FName, LName, email, pass, numID, phoneNum;

            DataFile >> FName;
            DataFile >> LName;
            DataFile >> email;
            DataFile >> pass;
            DataFile >> numID;
            DataFile >> phoneNum;

            BankClient currentLoadingClient = BankClient(FName, LName, email, pass, numID, phoneNum);

            int currentClientAccountCount;
            DataFile >> currentClientAccountCount;

            for (int accIndex = 0; accIndex < currentClientAccountCount; accIndex++) {

                string currentAccountType;
                DataFile >> currentAccountType;

                if (currentAccountType == "Checking") {

                    string openDate;
                    double balance;
                    int transactionsCount = 0;

                    DataFile >> balance;
                    DataFile >> openDate;

//                    cout << openDate;

                    Checkings currentLoadingAccount = Checkings(balance, Date(openDate), transactionsCount);
                    loadAccountTransaction(&currentLoadingAccount, &DataFile);
                    currentLoadingClient.addNewAccount(currentLoadingAccount);

                } else if (currentAccountType == "Savings") {


                }
            }

            addNewClient(currentLoadingClient);
        }

    } else {
        cout << "Error: Could not find Data.txt" << endl;
    }

    DataFile.close();


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

            DataFile << endl;


            DataFile << clientDataList[clientIndex].getAccountCount() << endl;

            Account clientAccounts[clientDataList[clientIndex].getAccountCount()];
            clientDataList[clientIndex].getAccounts(clientAccounts);

            for (int accIndex = 0; accIndex < clientDataList[clientIndex].getAccountCount(); accIndex++) {

                DataFile << clientAccounts[accIndex].printAccount() << endl;
                DataFile << clientAccounts[accIndex].getTransactionsCount() << endl;
                DataFile << clientAccounts[accIndex].transactionHistroyDatabasePrint();
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

void BankDatabases::loadAccountTransaction(Account *currentLoadingAccount, fstream *OUTFILE) {

    int transCount;
    *OUTFILE >> transCount;

    cout << transCount;

    for (int tranIndex = 0; tranIndex < transCount; tranIndex++) {

        string transType, discript;
        double transAmount;

        *OUTFILE << transType;
        *OUTFILE << transAmount;
        *OUTFILE << discript;

        if (transType == "Deposit") {

            currentLoadingAccount->addNewTransactios(Transaction(true, transAmount, discript));

        } else {

            currentLoadingAccount->addNewTransactios(Transaction(false, transAmount, discript));

        }
    }


}

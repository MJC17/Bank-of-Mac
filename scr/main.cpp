//
// Created by Matthew Arias on 2022-03-16.
//


#include <iostream>
#include <cstdlib>
#include "BankDatabase.h"
#include "BankClient.h"

void userLoggedIn(BankClient *activeClient, BankDatabases *activeDatabase);

void printLogo();

void skip();

using namespace std;


int main() {

    BankDatabases database = BankDatabases();
    BankClient *currentActiveClient;

    int loginAttemptCount = 0;

    printLogo();
    skip();
//    cout << "WELCOME TO THE BANK OF MAC ATM" << endl << endl;



    int choice;
    cout << "1) Login \n2) Sign-up" << endl;
    cin >> choice;
    if (choice == 1) {

        string emailAddressInput, passwordInput;
        cout << "----- Login -----" << endl;

        while (true) {

            cout << "Enter Email: ";
            cin >> emailAddressInput;

            cout << "Enter Password: ";
            cin >> passwordInput;
            skip();

            loginAttemptCount++;

            if (database.verifyClient(emailAddressInput, passwordInput)) {

                currentActiveClient = database.getVerifedBankClient(emailAddressInput, passwordInput);
                userLoggedIn(currentActiveClient, &database);
                break;

            } else if (loginAttemptCount == 5) {
                cout << "Sorry, you have attempted to login too many times. Ending Program, GOODBYE!" << endl;
                exit(0);

            } else {
                cout << "Sorry, your login entry doesn't match our records. Please try again. (" << 5 - loginAttemptCount << " attempts left)" << endl;

            }
        }

    } else if (choice == 2) {

        string fnameInput, lnameInput, emailInput, passwordInput, phoneInput;
        cout << "Please enter the following information." << endl;

        cout << "First Name: ";
        cin >> fnameInput;
        skip();

        cout << "Last Name: ";
        cin >> lnameInput;
        skip();

        cout << "Phone number: ";
        cin >> phoneInput;
        skip();


        while (true) {

            cout << "Email: ";
            cin >> emailInput;
            skip();

            cout << "Create a password: ";
            cin >> passwordInput;
            skip();

            BankClient newClient = BankClient(fnameInput, lnameInput, emailInput, passwordInput, phoneInput);

            if (database.ValidateNewLogin(newClient)) {

                database.addNewClientToDatabase(newClient);
                break;

            } else {

                cout << "Invalided Entry: The email you have entered has already been used. Try again!" << endl;

            }

        }

        currentActiveClient = database.getVerifedBankClient(emailInput, passwordInput);
        userLoggedIn(currentActiveClient, &database);
    }
}

void userLoggedIn(BankClient *activeClient, BankDatabases *activeDatabase) {

    while (true) {

        cout << "Hello, " << activeClient->getClientFirstName() << " " << activeClient->getClientLastName() << endl;
        cout << "PLEASE SELECT AN OPTION:" << endl;
        cout << "1) View Account " << endl; // client can view all of their active accounts, then pick which transaction history they want to View
        cout << "2) Withdrawal" << endl; // the client can withdraw from any of their accounts
        cout << "3) Deposit" << endl; // the client can deposit into any of their accounts
        cout << "4) Transfer" << endl; // the client can transfer money from any of their accounts into another account that they own
        cout << "5) E-Transfer" << endl; // the client can transfer money from any of their accounts to another client at the bano
        cout << "0) Quit" << endl << endl; // end / terminate the program

        int choice2 = 0;
        cin >> choice2;

        if (choice2 == 1) {
            //currentActiveClient->getAccounts();

        } else if (choice2 == 2) {
            double withdrawalAmount = 0.0;
            cout << "From which account would you like to withdrawal?" << endl;
            // bring up the active accounts
            cout << "How much would you like to withdrawal?" << endl;
            cin >> withdrawalAmount;
            //  use .setBalance(getBalance-withdrawalAmount);
            cout << "Amount withdrawled. Your new balance is $" <</*getBalance*/endl;
        } else if (choice2 == 3) {
            double depositAmount = 0.0;
            cout << "To which account would you like to deposit?" << endl;
            cin >> depositAmount;
            // use .setBalance(.getBalance + depositAmount)
            cout << "Amount deposited. Your new balance is $" <</*getBalance*/endl;
        } else if (choice2 == 4) {

        } else if (choice2 == 5) {

        } else if (choice2 == 0) {
            cout << "Thank you for using Bank of Mac, have a great day" << endl;
            activeDatabase->saveAllData();
            break;

        } else {
            cout << "Invalid selection. Try again!" << endl;
            cin >> choice2;
        }
    }
}


void printLogo() {

    cout << " ______        _       ____  _____  ___  ____       ___   ________    ____    ____       _        ______  \n"
            "|_   _ \\      / \\     |_   \\|_   _||_  ||_  _|    .'   `.|_   __  |  |_   \\  /   _|     / \\     .' ___  | \n"
            "  | |_) |    / _ \\      |   \\ | |    | |_/ /     /  .-.  \\ | |_ \\_|    |   \\/   |      / _ \\   / .'   \\_| \n"
            "  |  __'.   / ___ \\     | |\\ \\| |    |  __'.     | |   | | |  _|       | |\\  /| |     / ___ \\  | |        \n"
            " _| |__) |_/ /   \\ \\_  _| |_\\   |_  _| |  \\ \\_   \\  `-'  /_| |_       _| |_\\/_| |_  _/ /   \\ \\_\\ `.___.'\\ \n"
            "|_______/ |____| |____||_____|\\____||____||____|   `.___.'|_____|     |_____||_____||____| |____|`.____ .'  " << endl;
}

void skip() {
    cout << endl;
}
//
// Created by Matthew Arias on 2022-03-16.
//


#include <iostream>
#include <cstdlib>
#include "BankDatabase.h"
#include "BankClient.h"
#include "Checkings.h"
#include "Savings.h"

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

    cout << "Hello, " << activeClient->getClientFirstName() << " " << activeClient->getClientLastName() << endl;

    while (true) {

        cout << "PLEASE SELECT AN OPTION:" << endl;
        cout << "\t1) View Account " << endl; // client can view all of their active accounts, then pick which transaction history they want to View
        cout << "\t2) Open New Account" << endl; // client can view all of their active accounts, then pick which transaction history they want to View
        cout << "\t3) Withdrawal" << endl; // the client can withdraw from any of their accounts
        cout << "\t4) Deposit" << endl; // the client can deposit into any of their accounts
        cout << "\t5) Transfer" << endl; // the client can transfer money from any of their accounts into another account that they own
        cout << "\t0) Quit" << endl << endl; // end / terminate the program

        int choice2 = 0;
        cin >> choice2;
        skip();

        if (choice2 == 1) {
            cout << "Your Current Active Accounts:" << endl;
            activeClient->printAccounts();

            int accountIndexInput;
            cout << endl << "Which Account do you want to view: ";
            cin >> accountIndexInput;
            skip();

            Account *activeAccount = activeClient->getAccount(accountIndexInput);
            activeAccount->printAccountInfo();
            skip();


        } else if (choice2 == 2) {

            if (activeClient->getAccountCount() < 5) {

                cout << "ACCOUNT TYPES AVAILABLE: " << endl;
                cout << "\t1) Checkings Account" << endl;
                cout << "\t2) Savings Account" << endl << endl;
                cout << "What type of account do to want: ";

                int accountChoiceInput;
                cin >> accountChoiceInput;
                skip();

                if (accountChoiceInput == 1) {

                    Checkings newAccount = Checkings();
                    cout << "A new checkings account has been made for you." << endl;
                    cout << "Account ID: " << newAccount.getAccountId() << endl;
                    activeClient->addNewAccount(newAccount);


                } else if (accountChoiceInput == 2) {

                    Savings newAccount = Savings();
                    cout << "A new savings account has been made for you." << endl;
                    cout << "Account ID: " << newAccount.getAccountId() << endl << endl;
                    activeClient->addNewAccount(newAccount);
                }


            } else {

                cout << "Sorry, you have to many account open with us right now." << endl;
                cout << "Please Call to book an appointment with one of Associates to correct this problem." << endl << endl;

            }


        } else if (choice2 == 3) {
            // bring up the active accounts
            cout << "From which account would you like to withdrawal?" << endl;
            activeClient->printAccounts();

            int accountIndexInput;
            cout << endl << "Account : ";
            cin >> accountIndexInput;
            skip();

            Account *activeAccount = activeClient->getAccount(accountIndexInput);

            if (activeAccount->getBalance() != 0) {

                while (true) {

                    cout << "How much would you like to withdrawal? (withdrawal limit: $" << activeAccount->getBalance() << ")" << endl;
                    cout << "Amount: " << endl;
                    double withdrawalAmount = 0.0;
                    cin >> withdrawalAmount;
                    skip();

                    if (withdrawalAmount < activeAccount->getBalance()) {

                        cout.precision(2);
                        activeAccount->addNewTransactios(Transaction(false, withdrawalAmount, "ATM-WDRL"));
                        cout << "Withdrawal successful! Your cash with be Delivered within 3 - 5 Business days." << endl;
                        cout << "Your Account balance is $" << fixed << activeAccount->getBalance() << endl << endl;
                        break;

                    } else {
                        cout << "Insufficient funds, please try again." << endl;
                    }
                }

            } else {

                cout << "Sorry, you do not have enough money in you account right now to make a withdrawal." << endl;

            }

        } else if (choice2 == 4) {

            cout << "To which account would you like to deposit?" << endl;
            activeClient->printAccounts();

            int accountIndexInput;
            cout << endl << "Account : ";
            cin >> accountIndexInput;
            skip();

            Account *activeAccount = activeClient->getAccount(accountIndexInput);

            while (true) {

                cout << "How much would you like to deposit? (deposit limit: $999.99)" << endl;
                cout << "Amount: " << endl;
                double depositAmount = 0.0;
                cin >> depositAmount;
                skip();

                if (depositAmount < 999.99) {

                    cout.precision(2);
                    activeAccount->addNewTransactios(Transaction(true, depositAmount, "ATM-DEPOS"));
                    cout << "Deposit successful! Your Account balance is $" << fixed << activeAccount->getBalance() << endl << endl;
                    break;

                } else {
                    cout << "Exceeded deposit limit, please try again." << endl;

                }
            }

        } else if (choice2 == 5) {

            if (activeClient->getAccountCount() > 1) {

                cout << "Your Current Active Accounts:" << endl;
                activeClient->printAccounts();
                skip();

                int accountIndexInput;

                cout << "From which account would you like to send money from?" << endl;
                cout << "Account : ";
                cin >> accountIndexInput;
                skip();

                Account *sendingAccount = activeClient->getAccount(accountIndexInput);

                while (true) {

                    cout << "From which account would you like to send money too?" << endl;
                    cout << "Account : ";
                    cin >> accountIndexInput;
                    skip();

                    Account *receivingAccount = activeClient->getAccount(accountIndexInput);


                    if (sendingAccount != receivingAccount) {

                        while (true) {

                            if (sendingAccount->getBalance() < 999.99) {
                                cout << "How much would you like to transfer? (limit: $" << receivingAccount->getBalance() << ")" << endl;

                            } else {
                                cout << "How much would you like to transfer? (limit: $999.99)" << endl;
                            }

                            cout << "Amount: ";
                            double amount = 0.0;
                            cin >> amount;
                            skip();

                            if (amount < 999.99 && amount < sendingAccount->getBalance()) {

                                sendingAccount->addNewTransactios(Transaction(false, amount, "Transfer"));
                                receivingAccount->addNewTransactios(Transaction(true, amount, "Transfer"));
                                cout << "Transfer successful! Go to 'View Accounts' to see account balances" << endl << endl;
                                break;

                            } else {

                                cout << "Error: Exceeded transfer limit or Insufficient funds." << endl;
                                cout << "Please try again." << endl << endl;

                            }
                        }

                        break;

                    } else {

                        cout << "Error: Selected the same account, please try again." << endl << endl;
                    }
                }

            } else {

                cout << "You currently do not have enough accounts to make a transfer (minimum of 2 accounts)." << endl;
                cout << "To open another account, please go to 'Open New Account'" << endl;


            }


        } else if (choice2 == 0) {
            cout << "Thank you for using Bank of Mac, have a great day" << endl;
            break;

        } else {
            cout << "Invalid selection. Try again!" << endl;
            cin >> choice2;
        }

//        activeDatabase->saveAllData();
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
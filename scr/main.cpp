//
// Created by Matthew Arias on 2022-03-16.
//


#include <iostream>
#include <cstdlib>

#include "BankDatabase.h"
#include "BankClient.h"
//#include "Date.h"

void skip();
using namespace std;


int main() {

    BankDatabases Database = *new BankDatabases();

    string emailAddressInput, passwordInput;
    BankClient currentActiveClient = *new BankClient();
    int loginAttemptCount = 0;

    cout << "WELCOME TO THE BANK OF MAC ATM" << endl << endl;


    cout << "----- Login -----" << endl;

    while (true){

        cout << "Email: ";
        cin >> emailAddressInput;

        cout << "Password: ";
        cin >> passwordInput;
        skip();

        loginAttemptCount++;

        if (Database.verifyClient(emailAddressInput, passwordInput)){

            currentActiveClient = Database.getVerifedBankClient(emailAddressInput, passwordInput);
            break;

        } else if (loginAttemptCount ==  5){
            cout << "Sorry, you have attempted to login too many times. Ending Program, GOODBYE!" << endl;
            exit(0);

        } else {
            cout << "Sorry, your login entry doesn't match our records. Please try again. (" << 5 - loginAttemptCount << " attempts left)" << endl;

        }
    }




//    int choice = 0;
    cout << "PLEASE SELECT AN OPTION:" << endl;

//    do {
//
//        cout << "1) View Account " << endl; // client can view all of their active accounts, then pick which transaction history they want to View
//        cout << "2) Withdrawal" << endl; // the client can withdraw from any of their accounts
//        cout << "3) Deposit" << endl; // the client can deposit into any of their accounts
//        cout << "4) Transfer" << endl; // the client can transfer money from any of their accounts into another account that they own
//        cout << "5) E-Transfer" << endl << endl ; // the client can transfer money from any of their accounts to another client at the bano
//
//        cout << "0) Quit" << endl;
//
//        cin >> choice;
//
//        if (choice == 1) {
//            int secondChoice = 0;
//
//            do {
//                cout << "1) Open a checking account" << endl;
//                cout << "2) Open a savings account" << endl;
//                cin >> secondChoice;
//                skip();
//
//                if (secondChoice == 1) {
//                    cout << "Please enter the following information." << endl;
//                    cout << "First name: ";
//                    string Fname, Lname;
//                    cin >> Fname;
//                    skip();
//
//                    cout << "Last name: ";
//                    cin >> Lname;
//                    skip();
//                    int phone;
//
//                    cout << "Phone Number: ";
//                    cin >> phone;
//                    skip();
//                    int y, m, d;
//
//                    cout << "Year of birth: ";
//                    cin >> y;
//                    skip();
//
//                    cout << "Month of birth: ";
//                    cin >> m;
//                    skip();
//
//                    cout << "Day of birth: ";
//                    cin >> d;
//                    skip();
//
//                    Date clientDOB(y, m, d);
//                    BankClient user(Fname, Lname, phone, clientDOB);
//                } else if (secondChoice == 2) {
//
//                } else {
//                    cout << "Invalid selection. Try again!" << endl;
//                    cin >> secondChoice;
//                }
//            } while (secondChoice != 1 || secondChoice != 2);
//        } else if (choice == 2) {
//
//        } else if (choice == 3) {
//
//        } else if (choice == 4) {
//
//        } else if (choice == 0) {
//            cout << "Thank you for using Bank of Mac, have a great day" << endl;
//            return 0;
//        } else {
//            cout << "Invalid selection. Try again!" << endl;
//            cin >> choice;
//        }
//    } while (choice != 0);
//    return 0;
}



void skip() {
    cout << endl;
}
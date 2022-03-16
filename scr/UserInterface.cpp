//
// Created by Matthew Arias on 2022-03-16.
#include <iostream>
#include "BankClient.h"
#include "Date.h"
using namespace std;
int main() {
    int choice = 0;
    cout<<"WELCOME TO THE BANK OF MAC ATM. PLEASE SELECT AN OPTION:"<<endl;
    do{
        cout<<"1) Open an account"<<endl;
        cout<<"2) Withdrawl"<<endl;
        cout<<"3) Deposit"<<endl;
        cout<<"4) View transaction history"<<endl;
        cout<<"0) Quit"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            int secondChoice = 0;
            do
            {
                cout<<"1) Open a checking account"<<endl;
                cout<<"2) Open a savings account"<<endl;
                cin>>secondChoice<<endl;
                if(secondChoice==1)
                {
                    cout<<"Please enter the following information."<<endl;
                    cout<<"First name: ";
                    string Fname, Lname;
                    cin>>Fname<<endl;
                    cout<<"Last name: ";
                    cin>>Lname<<endl;
                    int phone;
                    cout<<"Phone Number: ";
                    cin>>phone<<endl;
                    int y,m,d;
                    cout<<"Year of birth: ";
                    cin>>y;
                    cout<<"Month of birth: ";
                    cin>>m;
                    cout<<"Day of birth: ";
                    cin>>d;
                    Date clientDOB(y,m,d);

                }
                else if(secondChoice==2)
                {

                }
                else
                {
                    cout<<"Invalid selection. Try again!"<<endl;
                    cin>>secondChoice;
                }
            }while(secondChoice != 1 || secondChoice != 2);
        }
        else if(choice == 2)
        {

        }
        else if(choice == 3)
        {

        }
        else if(choice == 4)
        {

        }
        else if(choice == 0)
        {
            cout << "Thank you for using Bank of Mac, have a great day" << endl;
            return 0;
        }
        else
        {
            cout<<"Invalid selection. Try again!"<<endl;
            cin>>choice;
        }
    }while (choice!=0);
    return 0;
}
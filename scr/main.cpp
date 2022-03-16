#include <iostream>
#include "BankClient.h"

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

        int x;


        if(choice == 1)
        {
            int secondChoice = 0;
            do
            {
                cout<<"1) Checking account"<<endl;
                cout<<"2) Saving account"<<endl;
                cin>>secondChoice<<endl;
                if(secondChoice==1)
                {

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

        }
        else
        {
            cout<<"Invalid selection. Try again!"<<endl;
            cin>>choice;
        }
    }while (choice!=0);
    return 0;
}

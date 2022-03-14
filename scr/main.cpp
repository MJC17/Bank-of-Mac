#include <iostream>
#include "Accounts.h"
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

    }while (choice!=0);
    return 0;
}

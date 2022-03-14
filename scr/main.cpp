#include <iostream>
using namespace std;
int main() {
    int choice = 0;
    cout<<"WELCOME TO THE BANK OF MAC ATM. PLEASE SELECT AN OPTION:"
    do{
        cout<<"1) OPEN AN ACCOUNT"<<endl;
        cout<<"2) WITHDRAWL"<<endl;
        cout<<"3) DEPOSIT"<<endl;
        cout<<"4) VIEW TRANSACTION HISTORY"<<endl;
        cout<<"0) QUIT"<<endl;
        cin>>choice;
        switch (choice)
            case 1:
                int choice2;
                do{
                    cout<<"What account type would you like to open?"<<endl;
                }
            case 2:
            case 3:
            case 4:
            case 0:
            default:


    }while (choice!=0);

    return 0;
}

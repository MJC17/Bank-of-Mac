//
// Created by Marcus Cameron on 2022-03-14.
//

#include "BankClient.h"
#include <iostream>
using namespace std;

BankClient::BankClient(string FName, string LName, int phone, Date DOB)
{
    clientFirstName = FName;
    clientLastName = LName;
    clientPhoneNumber = phone;
    m_clientBirthDate = DOB;
}

BankClient::BankClient() {

}



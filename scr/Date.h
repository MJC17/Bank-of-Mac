//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_DATE_H
#define BANK_OF_MAC_DATE_H
#pragma once

#include <ostream>
#include <string>

using namespace std;

class Date {

private:
    int year;
    int month;
    int day;

public:

    Date();

    Date(int year, int month, int day);

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    string toString();
};

std::ostream &operator<<(std::ostream &os, const Date &date) {
    os << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();
    return os;
}

#endif //BANK_OF_MAC_DATE_H

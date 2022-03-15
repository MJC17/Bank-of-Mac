//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_DATE_H
#define BANK_OF_MAC_DATE_H
#include <ctime>

class Date {
    int m_year;
    int m_month;
    int m_day;
public:
    Date():
    Date(int year, int month, int day);
};


#endif //BANK_OF_MAC_DATE_H

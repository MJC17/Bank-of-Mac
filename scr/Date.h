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
    int getyear() {return m_year;}
    int getmonth() {return m_month;}
    int getday() {return m_day;}
    void setyear(int y) {m_year = y;}
    void setmonth(int m) {m_month = m;}
    void setday(int d) {m_day = d;}

};


#endif //BANK_OF_MAC_DATE_H

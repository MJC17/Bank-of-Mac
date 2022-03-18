//
// Created by Matthew Arias on 2022-03-15.
//

#ifndef BANK_OF_MAC_DATE_H
#define BANK_OF_MAC_DATE_H

class Date {

private:
public:
    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

private:
    int year;
    int month;
    int day;

public:
    Date();
    Date(int year, int month, int day);


};


#endif //BANK_OF_MAC_DATE_H

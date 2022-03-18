//
// Created by Matthew Arias on 2022-03-15.
//


#include "Date.h"
Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
}

Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

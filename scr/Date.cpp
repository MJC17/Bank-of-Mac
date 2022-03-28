//
// Created by Matthew Arias on 2022-03-15.
//

#include <ctime>

#include "Date.h"

Date::Date() {

    time_t now = time(0);
    tm *local_time = localtime(&now);

    year = 1900 + local_time->tm_year;
    month = 1 + local_time->tm_mon;
    day = local_time->tm_mday;
}

Date::Date(int y, int m, int d) {
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

string Date::toString() const {
    return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}

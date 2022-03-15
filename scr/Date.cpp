//
// Created by Matthew Arias on 2022-03-15.
#include "Date.h"
Date::Date()
{
    m_year = 0;
    m_month = 0;
    m_day = 0;
}
Date::Date(int year, int month, int day)
{
    m_year = year;
    m_month = month;
    m_day = day;
}
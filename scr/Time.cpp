//
// Created by Marcus Cameron on 2022-03-16.
//

#include<iostream>
#include<iomanip>
#include "Time.h"
#include <stdio.h>
#include <time.h>

#include <ctime>


using namespace std;

Time :: Time()
{
    time_t now = time(0);
    hour = time_t(0);
    minute = m;
    second = s;
}

void Time :: setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";
}

bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour &&
       minute == otherTime.minute &&
       second == otherTime.second)
        return true;
    else
        return false;
}

Time Time::now (){


    this = new Time(4,4,4)


    return this;

}
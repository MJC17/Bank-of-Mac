//
// Created by Marcus Cameron on 2022-03-16.
//

#include<iostream>
#include<iomanip>
#include "Time.h"

using namespace std;

Time :: Time(int h, int m, int s)
{
    hour = h;
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

int main()
{
    Time t1(10, 50, 59);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09

    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";

    return 0;
}

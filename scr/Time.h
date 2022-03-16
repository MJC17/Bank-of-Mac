//
// Created by Marcus Cameron on 2022-03-16.
//

#ifndef BANK_OF_MAC_TIME_H
#define BANK_OF_MAC_TIME_H


class Time
{
private :
    int hour;
    int minute;
    int second;
public :
    //constructor with default value 0
    Time();
    //setter function
    void setTime(int h, int m, int s);
    //print description of object in hh:mm:ss
    void print();
    //compare two time object
    bool equals(Time);

    void now();
};



#endif //BANK_OF_MAC_TIME_H

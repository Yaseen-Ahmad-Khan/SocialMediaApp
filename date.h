#ifndef DATE_H
#define DATE_H

class date
{
    int d;
    int m;
    int y;
public:
    date();
    int& getday();
    int& getmonth();
    int& getyear();
    bool truedate(date);
};

#endif // DATE_H

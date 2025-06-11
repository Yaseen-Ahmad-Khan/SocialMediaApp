#include "date.h"

date::date()
{
    d=0;
    y=0;
    m=0;
}
int& date::getday()
{
    return d;
}
int& date::getmonth()
{
    return m;
}
int& date::getyear()
{
    return y;
}
bool date::truedate(date rhs)
{
    if(this->m==rhs.m&&this->y==rhs.y&&(rhs.d-this->d)<2&&(rhs.d-this->d)>=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

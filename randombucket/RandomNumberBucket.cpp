#include "RandomNumberBucket.h"
 
// RandomNumberBucket default constructor
RandomNumberBucket::RandomNumberBucket(int number)
{
    SetDate(year, month, day);
}
// RandomNumberBucket parametrized constructor
Date::Date(int year, int month, int day)
{
    SetDate(year, month, day);
}


// RandomNumberBucket member function
void Date::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}

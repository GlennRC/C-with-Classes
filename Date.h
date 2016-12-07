#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    Date(int year, int month, int day);
    ~Date();

    void SetDate(int year, int month, int day);
    int getYear();
    int getMonth();
    int getDay();
};

#endif

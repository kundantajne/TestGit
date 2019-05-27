#include <stdio.h>

class Date
{
    int day;
    int month;
    int year;

  public:
    void setDay(int a)
    {
        day = a;
    }
    void setMonth(int b)
    {
        month = b;
    }
    void setYear(int c)
    {
        year = c;
    }

    int getDay()
    {
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }
    void display()
    {
        printf("Day is:%d month Is:%d Year is:%d", this->day, this->month, this->year);
    }
};

int main()
{
    Date d1;
    d1.setDay(12);
    d1.setMonth(8);
    d1.setYear(1996);
    d1.display();
}
#include <iostream>
#include <cassert>

struct Date {
    int day;
    int month;
    int year;
    };

int main()
{
    Date date;
    date.day = 29;
    date.month = 9;
    date.year = 1990;
    
    assert(date.day == 29);
    assert(date.month == 8);
    assert(date.year == 1981);

    return 0;
}
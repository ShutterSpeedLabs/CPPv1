#include <iostream>
#include <cassert>

struct Date{
    public:
        int getDay()
        {
            return day;
        }
        int getMonth()
        {
            return month;
        }
        int getYear()
        {
            return year;
        }

        int setDay(int d)
        {
            if(d>=1 && d<=31)
            {
                day = d;
                return 1;
            }
            else
            {
                return -1;
            }

        }
        int setMonth(int m)
        {
            if(m>1 && m<=12)
            {
                month = m;
                return 1;
            }
            else
            {
                return -1;
            }
            
        }
        int setYear(int y)
        {
            if (y > 0)
            {
                year = y;
                return 1;
            }
            else
            {
                return -1;
            }
        }
    private:
        int day{2};
        int month{8};
        int year{1999};
};

int main(){
    Date date;

    assert(date.getDay() == 2);
    assert(date.getMonth() == 8);
    assert(date.getYear() == 1999);

    std::cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();
    return 0;
}

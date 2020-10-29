#include <iostream>
using namespace std;
int leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            if (year % 400 == 0)
            {
                leap year
            }
            else
            {
                not a leap year
            }
        }
        else
        {
            not a leap year
        }
    }
    else
    {
        not a leap year
    }

}
int age (int a, int b, int c)
{
    if (a > b)
    {
        days = a - b;
        carry = 0;
    }
    else
    {
        days = a + (c - b);
        carry = -1;
    }
}
int main ()
{
    int birth_y, birth_m, birth_d, current_y, current_m, current_d, days, month, d, m, y;

    cout << "Enter your DOB (YYYY MM DD) : " ;
    cin >> birth_y >> birth_m >> birth_d;
    cout << "Enter current date (YYYY MM DD) : ";
    cin >> current_y >> current_m >> current_d;
    switch (month)
    {
        case 1:
            days = 31;
            break;
        case 2:
            days = leap_year();
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9 :
            days = 30;
            break;
        case 10 :
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12 :
            days = 31;
            break;
    }

    d = age (current_d,  birth_d, );
    m = age (current_m, birth_m, );
    y = age (current_y, birth_y, );
}

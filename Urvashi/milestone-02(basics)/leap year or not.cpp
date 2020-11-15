#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year" << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "it is a leap year" << endl;
        if (year % 400 == 0)
        {
            cout << "it is a century leap year" << endl;
        }
    }
    else
        cout << "it is not a leap year" << endl;
}

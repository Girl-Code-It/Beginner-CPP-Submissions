/* Q4: A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include <iostream>
using namespace std;
int main()
{
    float salary, year, net;
    cin >> salary >> year;
    if (year > 5)
    {
        net = salary + (salary * 0.05);
        cout << "you got bonus of 5% and your net bonus amount is:" << net;
        return 0;
    }
    else
        net = salary;
    cout << "your net anmount " << net;
    return 0;
}

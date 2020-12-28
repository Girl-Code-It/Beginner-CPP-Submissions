#include<iostream>
using namespace std;
int main()
{
    int sal , year;
    cout << "Enter salary and years of service: ";
    cin >> sal >> year;
    if(year > 5)
    {
        cout << "Your bonus is: " << (5*sal)/100 << endl;
        sal = sal + ((5*sal)/100);
        cout << "your salary is: " << sal;
    }
    else
        cout << "your salary is: " << sal;
    return 0;
}

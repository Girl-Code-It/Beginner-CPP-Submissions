#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int year, salary, bonus, final_salary;
    cout << "Since How many Years You are working with us Sir? " << endl;
    cin >> year;

    cout << "What's your current salary sir ? " <<endl;
    cin >> salary;

    if(year >=5)
    {
        bonus = salary * 0.05;
        final_salary = salary + bonus;
        cout << "Congrats Your new salary is " << final_salary << " Sir" <<endl;
    }
    else
    {
        bonus = 0;
        cout << "Your new Salary is " << salary;
    }


}


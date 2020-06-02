#include <iostream>
using namespace std;
double taxCalculator(double a, double b)
{
    double taxable_income, k, m;
    if (b <= 100000)
        taxable_income = a - b;
    else
        taxable_income = a - 100000;

        if (taxable_income <= 100000)
        {
            cout << "SLAB 0\n";
            return (0);
        }
        else if (taxable_income<= 200000 && taxable_income > 100000)
        {
            cout << "SLAB 1\n";
            return (taxable_income/10);
        }
        else if(taxable_income <= 500000 && taxable_income > 200000)
        {
            cout << "SLAB 2\n";
            k = taxable_income - 200000;
            return (taxable_income/10 + k/5);
        }
        else
        {
            cout << "SLAB 3\n";
            k = taxable_income - 200000;
            m = taxable_income - 500000;
            return (taxable_income/10 + k/20 + (m*3)/10);
        }
    }

int main ()
{
    double a, b, tax;
    cout << "Enter your gross salary: ";
    cin >> a;
    cout << "Enter total savings amount: ";
    cin >> b;
    tax = taxCalculator (a, b);
    cout << "Your tax is : " << tax;
}

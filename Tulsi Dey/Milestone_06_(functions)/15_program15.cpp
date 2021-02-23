/*

Write a program that takes as input your gross salary and your total saving and uses another 
function named taxCalculator() to calculate your tax. The taxCalculator() function takes as 
parameters the gross salary as well as the total savings amount. The tax is calculated as 
follows:

(a) The savings is deducted from the gross income to calculate the taxable income. 
Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.

(b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax 
is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net tax is 
the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 
(Slab 2); if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of 
the amount exceeding 500,000.

*/
#include <iostream>

using namespace std;
double taxCalculator(int gs, int sav)
{
    double t, tax;
    if(sav >= 100000.00) t = gs - 100000.00;
    else t = gs - sav;

    if(t <= 100000.00) tax = 0.00;
    else if(t > 100000.00 && t <= 200000.00)
    tax = 0 + (t - 100000.00)*0.10;
    else if(t > 200000.00 && t <= 500000.00)
    tax = 0 + (100000.00)*0.10 + (t - 200000.00)*0.20;
    else if(t > 500000.00) 
    tax = 0 + (100000.00)*0.10 + (300000.00)*0.20 + (t - 500000.00)*0.30;

    return tax;

}
int main()
{
    int gSalary, savings;
    cout<<"Enter your gross salary: "; cin>>gSalary;
    cout<<"Enter your savings: "; cin>>savings;

    cout<<"Your tax is "<<taxCalculator(gSalary,savings);
    return 0;
}

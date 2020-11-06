#include <stdio.h>

long tax_calculator(int gs, int sav)
{
    long tax_inc, tax;
    if (sav < 100000)
    {
        tax_inc = gs - sav;
        if (tax_inc < 100000)
            tax = 0;
        else if (tax_inc >= 100000 && tax_inc < 200000)
            tax = (10 * tax_inc) / 100;
        else if (tax_inc >= 200000 && tax_inc < 500000)
            tax = 10000 + (20 * (tax_inc - 200000)) / 100;
        else
            tax = 70000 + (30 * (tax_inc - 500000) / 100);
    }

    else
    {
        tax_inc = gs - 100000;
        if (tax_inc < 100000)
            tax = 0;
        else if (tax_inc >= 100000 && tax_inc < 200000)
            tax = (10 * tax_inc) / 100;
        else if (tax_inc >= 200000 && tax_inc < 500000)
            tax = 10000 + (20 * (tax_inc - 200000)) / 100;
        else
            tax = 70000 + (30 * (tax_inc - 500000) / 100);
    }
}
int main()
{
    long gs, sav;
    printf("Enter Your gross salary : ");
    scanf("%d", &gs);
    printf("Enter Your saving : ");
    scanf("%d", &sav);
    printf("Tax = %d", tax_calculator(gs, sav));

    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int octal, decimal = 0, place = 0, digit = 0;

    cout<<"\n Enter an octal value: ";
    cin>>octal;

    while(octal!=0)
    {
        digit = octal % 10;
        decimal+=(pow(8,place)*digit);
        place++;
        octal/=10;
    }

    cout<<"\n Decimal number is "<<decimal;

    return 0;
}

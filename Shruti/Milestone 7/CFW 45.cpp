#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long binary=0;
    int decimal, place = 1, digit;

    cout<<"\n Enter a decimal value: ";
    cin>>decimal;

    while(decimal!=0)
    {
        digit = decimal%2;
        binary += (digit*place);
        place *= 10;
        decimal /= 2;
    }
    cout<<"\n Binary = "<<binary;
    return 0;
}

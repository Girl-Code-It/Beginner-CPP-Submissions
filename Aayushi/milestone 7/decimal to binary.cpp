/*
Decimal number system
Decimal number system is a base 10 number system.
Decimal number system uses only 10 symbols to represent all number i.e. 0123456789

Binary number system
Binary number system is a base 2 number system.
Binary number system uses only 2 symbols to represent all numbers i.e. 0 and 1
*/
#include <iostream>
using namespace std;
int main()
{
    int decimal, rem, binary=0, place=1, n;
    cout<<"Enter a decimal number : "<<endl;
    cin>>decimal;
    cout<<"binary number : ";
    for (n=decimal; n>0 ;n=n/2)
    {
        rem=n%2;
        binary = rem*place + binary;
        place*=10;
    }
    cout<<binary;
}

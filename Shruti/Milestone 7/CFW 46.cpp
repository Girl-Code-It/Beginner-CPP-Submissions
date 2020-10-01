#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int decimal, octal = 0, place = 1, digit;

    cout<<"\n Enter a decimal value: ";
    cin>>decimal;

    while(decimal!=0)
    {
        digit = decimal%8;
        octal += (digit*place);
        place *= 10;
        decimal /= 8;
    }
    cout<<"\n octal = "<<octal<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int octalvalues[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long binary = 0, place = 1;
    int octal, digit;

    cout<<"\n Enter an octal value: ";
    cin>>octal;

    while(octal!=0)
    {
        digit = octal % 10;
        binary += (octalvalues[digit])*place;
        place*=1000;
        octal/=10;
    }

    cout<<"\n binary = "<<binary;

    return 0;
}

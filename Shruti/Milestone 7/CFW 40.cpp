#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long binary;
    int N=0, decimal=0;

    cout<<"\n Enter any binary number: ";
    cin>>binary;

    while(binary!=0)
    {
        if(binary % 10 == 1)
        {
            decimal += pow(2, N);
        }

        N++;
        binary /= 10;
    }

    cout<<"\n Decimal no. = "<<decimal;

    return 0;
}

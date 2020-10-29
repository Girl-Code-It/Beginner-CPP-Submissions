#include <iostream>
using namespace std;

int main()
{
    int i, num, n, lastdig, sum = 0;
    long fac;

    cout<<"\n Enter a number: ";
    cin>>num;

    n = num;

    while(num > 0)
    {

        lastdig = num % 10;

        fac = 1;
        for(i=1; i<=lastdig; i++)
        {
            fac = fac * i;
        }

        sum = sum + fac;

        num = num / 10;
    }

    if(sum == n)
    {
        cout<<"\n "<<n<<" is a strong number.";
    }
    else
    {
        cout<<"\n "<<n<<" is not a strong number.";
    }

    return 0;
}

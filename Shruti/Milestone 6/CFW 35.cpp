#include <iostream>
using namespace std;

int main()
{
    int i, j, x, lastdig, num;
    long fac, sum;

    cout<<"\n Enter a number: ";
    cin>>num;

    cout<<"\n All strong numbers between 1 to "<<num<<" are: ";

    for(i=1; i<=num; i++)
    {
        x = i;
        sum = 0;
        while(x > 0)
        {
            fac = 1;
            lastdig = x % 10;

            for( j=1; j<=lastdig; j++)
            {
                fac = fac * j;
            }

            sum += fac;

            x /= 10;
        }

        if(sum == i)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}

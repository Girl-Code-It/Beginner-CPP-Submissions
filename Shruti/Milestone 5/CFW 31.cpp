#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, lastdig, digs, sum, i, x;

    cout<<"\n Enter a number: ";
    cin>>num;

    cout<<"\n Armstrong number between 1 to "<<num<<" are: ";

    for(i=1; i<=num; i++)
    {
        sum = 0;
        x = i;

        digs = (int) log10(x) + 1;

        while(x > 0)
        {
            lastdig = x % 10;

            sum = sum + ceil(pow(lastdig, digs));

            x = x / 10;
        }

        if(i == sum)
        {
            cout<<i<<" ";
        }

    }

    return 0;
}

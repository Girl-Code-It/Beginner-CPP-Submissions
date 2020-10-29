#include <iostream>
using namespace std;

int main()
{
    int num, i, j, sum;

    cout<<"\n Enter a number: ";
    cin>>num;

    cout<<"\n All perfect numbers between 1 to "<<num<<" are: ";

    for(i=1; i<=num; i++)
    {
        sum = 0;

        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }

        if(sum == i)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}

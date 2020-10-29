#include <iostream>
using namespace std;

int main()
{
    int num,i,j,sum=2;

    cout<<"\n Enter a number: ";
    cin>>num;

    for(i=2; i<=num; i++)
        {

        for(j=2; j<=(i/2); j++)
            {
                if(i%j==0)
                {
                    j=i;
                    break;
                }

            }

        if(j!=i)
            {
                sum+=i;
            }
        }
        cout<<"\n Sum of prime numbers between 1 to "<<num<<": "<<sum;
        return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num,i,j;

    cout<<"\n Enter a number: ";
    cin>>num;

    cout<<"\n All prime factors of "<<num<<": ";

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
                if(num%i==0)
                    cout<<i<<" ";
            }
        }
        return 0;
}

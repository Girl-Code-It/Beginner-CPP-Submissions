#include <iostream>

using namespace std;

int main()
{
    int num,i,j,prime=1,sum=0;

    cout<< "Enter a number :\n";
    cin>>num;

    for(i=2;i<num;i++)
    {
        for(j=2;j<i;j++)
        {
            prime=1;

            if(i%j==0)
            {
                prime=0;
                break;
            }

        }

        if(prime==1)
            {
                sum = sum+i;
            }

    }

    cout<< "The sum of the prime numbers is " <<sum<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int num,i,prime=1;

    cout<< "Enter a number :\n";
    cin>>num;

    for( i=2 ; i<num ; i++ )
    {
        if(num%i==0)
        {
            prime=0;

            break;
        }

    }

    if(prime==1 && num>1)
        cout<< "It is a prime number\n";
    else
        cout<< "It is not a prime number\n";



    return 0;
}

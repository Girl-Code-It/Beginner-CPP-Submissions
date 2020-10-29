#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum=0,num;

    cout<< "Enter a number :\n";
    cin>>num;


    while( num!=0 )

    {
        sum = sum + (num%10);

        num = num/10;

    }

    cout<< "The sum of the digits is "<<sum;






    return 0;
}

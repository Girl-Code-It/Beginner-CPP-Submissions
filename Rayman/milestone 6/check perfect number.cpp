/*
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.
*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0, i, sum=0;
    cout<<"enter a number : "<<num<<endl;
    cin>>num;
    //cout<<" factors of "<<num<<" are : ";
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum+=i;
            //cout<<i<<", ";
        }
    }
    if (sum==num)
    cout<<sum<<" is a perfect number."<<endl;
    else
    cout<<num<<" is not a perfect number."<<endl;
    return 0;
}

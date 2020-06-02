/*
An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits.
For example -
6 = 6^1 = 6
371 = 3^3 + 7^3 + 1^3 = 371
*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld=0, count, sum=0;
    cout<<"enter a number to check armstrong number : "<<endl;
    cin>> num;
    while (num>0)
    {
        num=num/10;
        count++;
    }
    while (num>0)
    {
        num=num/10;
        ld=num%10;
        sum=sum+pow(ld,count);
    }
    if(sum==num)
    cout<<"it is an armstrong number."<<endl;
    else
    cout<<"it is not an armstrong number.";
    return 0;
}

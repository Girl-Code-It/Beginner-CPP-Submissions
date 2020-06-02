#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld=0,count=0, digit=0;
    cout<<"enter a number : "<< num<<endl;
    cin>> num;
    cout<<"enter a digit : "<< digit<<endl;
    cin>> digit;
    while (num>0)
    {
        ld=num%10;
        num=num/10;
        if (ld==digit)
        {
            count++;
        }
    }
    cout<<"frequency of "<<digit<<" is : "<<count;

    return 0;
}

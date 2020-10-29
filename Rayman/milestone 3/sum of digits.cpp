#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld=0, sum=0;
    cout<<"enter a number : "<<endl;
    cin>> num;
    sum=num%10;
    while (num>0)
    {
        num=num/10;
        ld=num%10;
        sum=sum+ld;
    }
    cout<<"sum of digits : "<<sum<<endl;
    return 0;
}

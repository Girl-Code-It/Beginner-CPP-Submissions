#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld, product;
    cout<<"enter a number : "<< num<<endl;
    cin>> num;
    product=num%10;
    while (num>10)
    {
        num=num/10;
        ld=num%10;
        product=product*ld;
    }
    cout<<"product of digits : "<<product<<endl;
    return 0;
}

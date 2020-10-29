#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int num=1,i=0 ,fd=0 , ld=0, newnum=0, oldnum=0;
    cout<<"enter a number : "<< oldnum;
    cin>> oldnum;
    num=oldnum;
    ld=num%10;     //define ld before entering the loop.
    while (num>10)
    {
        num=num/10;
        i++;       //i=count
        fd=num;
    }
    cout<<"first digit of the number is : "<<fd<<endl;
    cout<<"last digit of the number is : "<<ld<<endl;
    newnum=(ld*pow(10,i) +fd) + (oldnum-fd*pow(10,i)-ld) ;   //pow(10,i) implies 10^i
    cout<<oldnum<<" is swapped to "<<newnum;
    return 0;
}

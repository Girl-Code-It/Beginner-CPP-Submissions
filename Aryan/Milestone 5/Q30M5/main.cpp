#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num,x=0,sum=0,i=0,y=0;

    cout<< "Enter a number :\n";
    cin>>num;

    x=num;

    while(num!=0)
    {
       num = num/10;
       i++;

    }



    num = x;


    while(num>0)
    {
        y=num%10;
        y = pow(y,i);
        sum = sum + y;
        num = num/10;

    }



    if(sum==x)
        cout<< "The number is an Armstrong number\n";
    else
        cout<< "It is not an Amstrong number\n";


    return 0;
}

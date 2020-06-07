#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num,n,lastdig,digs,sum=0;

    cout<<"\n Enter a number: ";
    cin>>n;

    num=n;

    digs=(int)log10(n)+1;

    while(n>0)
    {
        lastdig=n%10;
        sum=sum+round(pow(lastdig,digs));

        n=n/10;
    }

        if(num==sum)
    {
        cout<<"\n "<<num<<" is an armstrong number.";
    }
    else
    {
        cout<<"\n "<<num<<" is not an armstrong number.";
    }

    return 0;
}

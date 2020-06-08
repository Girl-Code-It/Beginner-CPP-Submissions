#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, snum;
    int fdig, last, digs;

    cout<<"\n Enter a number: ";
    cin>>num;

    last=num % 10;

    digs=(int)log10(num);

    fdig=(int)(num / pow(10, digs));

    snum=last;
    snum*=(int) pow(10, digs);
    snum+=num%((int) pow(10, digs));
    snum-=last;
    snum+=fdig;

    cout<<"\n Original number is: "<<num;
    cout<<"\n New number is: "<<snum;

    return 0;
}

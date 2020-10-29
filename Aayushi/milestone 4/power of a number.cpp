#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int num=0, power=0, i=0, product=1;
    cout<<"enter a base : "<<endl;
    cin>>num;
    cout<<"enter the exponent : "<<power<<endl;
    cin>>power;
    for (i=1; i<=power; i++)
    {
        product=product*num;
    }
    cout<<num<<" ^ "<<power<<" = "<<product;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;int ne;
    cin>>n;
    int digit =log10(n);
    int f=n/pow(10,digit);
    int l=n%10;
    int a=f*pow(10,digit);
    int b=n%a;
    int c= b/10;
    ne =(l*pow(10,digit))+c*10+f;
    cout<<ne;
}

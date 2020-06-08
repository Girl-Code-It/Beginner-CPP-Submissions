#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,p,i=0,x,y,num;

    cout<<"Enter a number \n";
    cin>>n;

    p=n;

    while(p>=10)
    {

        p = p/10;

        i++;

    }

    x = n%10;
    y = pow(10,i);
    n = n - y*p;

    num = x*y + (n-x) + p;


    cout<<"Swapped number = "<<num;




    return 0;
}

#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1=0, num2=0, a, b, mx, lcm=1, p, q;
    cout<<"enter a 1st number : "<<endl;
    cin>>num1;
    cout<<"enter a 2nd number : "<<endl;
    cin>>num2;
    mx=(num1>num2) ? num1 : num2;
    cout<<" LCM of "<< num1<<" and "<< num2<<" is : ";
    for(a=1; a<=mx; a++)
    {

        p=num1*a;
        for (b=1; b<=mx; b++)
        {

            q=num2*b;
            if(p==q)
              {
                 lcm=p;
                 break;
              }
        }
        if (p==q)
        {break;}
    }
    cout<<lcm;
    return 0;
}
/*
 * ALTERNATIVE : LCM=(num1*num2)/HCF
 */

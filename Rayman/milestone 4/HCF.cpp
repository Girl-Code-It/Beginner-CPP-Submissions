#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num1=0, num2=0, i, min, hcf;
    cout<<"enter a 1st number : "<<num1<<endl;
    cin>>num1;
    cout<<"enter a 2nd number : "<<num2<<endl;
    cin>>num2;
    min=(num1>num2) ? num2 : num1;
    cout<<" HCF of "<< num1<<" and "<< num2<<" is : ";
    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
           hcf=i;
        }
    }
    cout<<hcf;
    return 0;
}

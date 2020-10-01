#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num,sum=0,i;

    cout<< "Enter a number \n";
    cin>>num;

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum = sum+i;
        }
    }

    if(sum==num)
        cout<< "It is a perfect number ";
    else
        cout<< "It is not a perfect number ";





  return 0;
}


